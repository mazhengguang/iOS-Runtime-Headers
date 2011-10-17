/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray, NSMutableSet;

@interface CKWebviewBasedContentEntryBridge : CKContentEntryBridge  {
    NSMutableArray *_resources;
    int _composeResourcePoolID;
    NSMutableSet *_imageDeletionSet;
}


- (id)attachments;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1 inTextContentView:(id)arg2;
- (BOOL)hasContent;
- (void)richContentView:(id)arg1 didRemoveImage:(id)arg2;
- (void)richContentView:(id)arg1 didInsertImage:(id)arg2;
- (void)_resetResourcePool;
- (id)_htmlForMessagePart:(id)arg1;
- (id)_nodeForImagePart:(id)arg1 forRichContentView:(id)arg2;
- (id)_imageURLForPart:(id)arg1 partID:(int)arg2;
- (void)_removeImages;
- (void)updateComposition;
- (id)_textView;
- (id)newContentViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)messageComposition;
- (id)messageCompositionIfTextOnly;
- (void)setMessageComposition:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setMessageParts:(id)arg1;
- (id)messageParts;
- (void)insertMessagePart:(id)arg1;

@end