/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPVerticalTextStackView : LPComponentView <LPContentInsettable> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _contentInset;
    BOOL  _hasEverBuilt;
    NSMutableArray * _items;
    LPVerticalTextStackViewStyle * _style;
}

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })_layoutTextStackForSize:(struct CGSize { float x1; float x2; })arg1 applyingLayout:(BOOL)arg2;
- (void)addArrangedSubview:(id)arg1;
- (id)init;
- (id)initWithStyle:(id)arg1;
- (void)layoutComponentView;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
