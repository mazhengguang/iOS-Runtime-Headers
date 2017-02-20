/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageLayerPrivate : NSObject {
    int  displayBox;
    struct CGDisplayList { } * displayList;
    bool  hasZoomed;
    bool  isZooming;
    unsigned long long  layoutEndTime;
    int  layoutExpectedTileCount;
    unsigned long long  layoutStartTime;
    int  layoutUpdateCount;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  oldPageRect;
    int  oldRotation;
    PDFPage * page;
    PDFPageView * parentView;
    bool  requestedLayout;
    bool  requestedLayoutDuringLayout;
    bool  shouldAntiAlias;
    bool  tileLayerHidden;
    NSMutableDictionary * tiles;
    CALayer * tilesLayer;
}

- (void).cxx_destruct;

@end