/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

//Function to push an element in queue by using 2 stacks.
stack<int> s1,s2;
void StackQueue :: push(int x)
{
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
      // shift input to output 
       if(s2.empty())
    {
        if(s1.empty())
        return -1;
        else
        while(!s1.empty()) 
        {
            s2.push(s1.top());
            s1.pop();
        }
    }
       int x= s2.top();
       s2.pop();
       while(!s2.empty())
       {
           s1.push(s2.top());
           s2.pop();
       }
       return x;
}
