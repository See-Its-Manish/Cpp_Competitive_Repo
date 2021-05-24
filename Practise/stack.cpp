//Link : https://www.hackerrank.com/challenges/maximum-element/problem?isFullScreen=true
// AIM : Stack Implementation
#include<bits/stdc++.h>
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back
#define ppb pop_back
#define el std::cout<<"\n"
#define loop(st,con,inc) for(auto it=st; it<con; it+=inc)
ll maxOfTwo(ll a , ll b) {
	return (a > b ? a : b);
}

class stack {
public:
	ll data;
	stack *next;

	stack(ll g) {
		data = g;
		next = NULL;
	}
	void push_back(ll d);
	void pop_back();
	ll peek();
	ll findMax(stack *head);

}*top;

void stack::push_back(ll d) {
	stack *toAdd = new stack(d);
	toAdd->next = top;
	top = toAdd;
}

void stack::pop_back() {
	if (top == NULL) {
		return;
	}
	stack *temp = top;
	top = top->next;
	delete(temp);
}

ll findMax(stack* head) {
	if (head == NULL) return LLONG_MIN;
	if (head->next == NULL) return (head->data);

	ll maxNum = (head->data);
	head = head->next;
	while (head != NULL) {
		maxNum = maxOfTwo((head->data), maxNum);
		head = head->next;
	}
	return (maxNum);
}





int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	top = NULL;
	// Input
	int n, inp;
	std::cin >> n;
	// Stack Declaration
	stack s(1);

	ll max = LLONG_MIN;
	while (n-- != 0) {
		std::cin >> inp;
		switch (inp)
		{

		case 1: {
			ll x;
			std::cin >> x;
			s.pb(x);
			max = maxOfTwo(max, x);
			break;
		}

		case 2: {
			ll toPop = (top->data);
			s.ppb();
			if (toPop == max) {
				max = findMax(top);
			}
			break;
		}

		case 3: {
			std::cout << max << std::endl;
			break;
		}

		}
	}

	return 0;
}