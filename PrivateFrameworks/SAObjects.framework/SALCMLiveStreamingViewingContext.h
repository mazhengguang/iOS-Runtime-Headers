/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALCMLiveStreamingViewingContext : SALCMViewingContext

@property (nonatomic, copy) NSDate *eventStartTime;
@property (nonatomic) BOOL watchingLive;

+ (id)liveStreamingViewingContext;
+ (id)liveStreamingViewingContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)eventStartTime;
- (id)groupIdentifier;
- (void)setEventStartTime:(id)arg1;
- (void)setWatchingLive:(BOOL)arg1;
- (BOOL)watchingLive;

@end
