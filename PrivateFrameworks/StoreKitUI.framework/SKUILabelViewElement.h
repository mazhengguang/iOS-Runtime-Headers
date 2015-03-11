/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIViewElementText;

@interface SKUILabelViewElement : SKUIViewElement {
    int _labelViewStyle;
    NSString *_moreButtonTitle;
    int _numberOfLines;
    SKUIViewElementText *_text;
}

@property(readonly) int labelViewStyle;
@property(readonly) NSString * moreButtonTitle;
@property(readonly) int numberOfLines;
@property(readonly) SKUIViewElementText * text;

+ (BOOL)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (int)labelViewStyle;
- (id)moreButtonTitle;
- (int)numberOfLines;
- (int)pageComponentType;
- (id)text;

@end