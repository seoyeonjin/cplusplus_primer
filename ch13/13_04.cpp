/*Point global;
Point foo_bar(Point arg) // 1
{
    Point local = arg, * heap = new Point(global); // 2, 3
    *heap = local;
    Point pa[4] = { local, *heap }; // 4, 5
    return *heap; // 6
}*/
