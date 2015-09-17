/* Generated by RuntimeBrowser.
 */

@protocol OFViewControllerInteractiveTransitioning <NSObject>

@required

- (void)endInteractiveTransitionWithContext:(id <OFViewControllerTransitioningContext>)arg1 transitionCompleted:(BOOL)arg2;
- (void)makeCurrentTransitionInteractiveWithContext:(id <OFViewControllerTransitioningContext>)arg1 andProgress:(float)arg2;
- (void)startInteractiveTransitionWithContext:(id <OFViewControllerTransitioningContext>)arg1;
- (BOOL)tracksWithFinger;
- (void)updateInteractiveTransitionWithContext:(id <OFViewControllerTransitioningContext>)arg1 andProgress:(float)arg2;

@end