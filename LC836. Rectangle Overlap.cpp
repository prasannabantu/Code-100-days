bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int px1=rec1[0];   int qx1=rec2[0];
        int py1=rec1[1];   int qy1=rec2[1];
        int px3=rec1[2];   int qx3=rec2[2];
        int py3=rec1[3];   int qy3=rec2[3];

        if(px1<qx3 && qx1<px3 && py1<qy3 && qy1<py3) return 1;
        return 0;
    }
