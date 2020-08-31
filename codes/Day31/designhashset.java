class MyHashSet
{
    List<Integer> list;

    public MyHashSet(){
        list = new ArrayList<>();
    }

    public void add(int key)
    {
        if(!list.contains(key))
        list.add(key);
    }

    public void remove(int key)
    {
        Iterator<Integer> it = list.iterator();
        while(it.hasNext())
        {
            int val = it.next();
            if(val==key)
            {
                it.remove();
                return;
            }
        }
    }

    public boolean contains(int key) {
        return list.contains(key);
    }

}

class Main
{
    public static void main(String[] args) {
        
        MyHashSet ob1 = new MyHashSet();

        ob1.add(22);
        
        System.out.println(ob1.contains(22));
    }
}