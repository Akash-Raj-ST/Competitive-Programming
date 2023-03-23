class SegmentTree{
	public:
		vector<ll> tree;
		int n;
		SegmentTree(int sz){
			n = 1;
			while(n < sz){
				n <<= 1;
			}
			tree.assign(2 * n, 0ll);
		}
		void set(int ind, int val){
			ind += n;
			tree[ind] = val;
			ind /= 2;
			while(ind > 0){
				tree[ind] = add(tree[2 * ind], tree[2 * ind + 1]);
				ind /= 2;
			}
		}
		ll get(int l, int r){
			l += n;
			r += n;
			ll ans = 0;
			while(l <= r){
				if(l % 2 == 1){
					ans = add(ans, tree[l]);
					++l;
				}
				if(r % 2 == 0){
					ans = add(ans, tree[r]);
					--r;
				}
				l /= 2;
				r /= 2;
			}
			return ans;
		}
};