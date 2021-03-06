/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneHostManager : NSObject <BSDescriptionProviding, FBSceneLayerHostContainerViewDelegate> {
    FBSceneHostWrapperView * _activeWrapperView;
    UIColor * _defaultBackgroundColorWhileHosting;
    UIColor * _defaultBackgroundColorWhileNotHosting;
    unsigned int  _defaultHostedLayerTypes;
    <FBSceneHostManagerDelegate> * _delegate;
    NSMutableSet * _disableHostingAssertions;
    struct { 
        unsigned int delegateOverrideRequester : 1; 
        unsigned int DEPRECATED_delegateOverrideRequester : 1; 
        unsigned int delegateShouldEnableContextHostingForRequester : 1; 
        unsigned int DEPRECATED_delegateShouldEnableContextHostingForRequester : 1; 
    }  _flags;
    FBOrderedRequesters * _hostRequesters;
    FBSceneLayerHostContainerView * _hostView;
    NSMutableDictionary * _hostWrapperViewsByRequester;
    NSString * _identifier;
    BOOL  _invalidated;
    FBSceneLayerManager * _layerManager;
    NSHashTable * _observers;
    FBScene * _scene;
    BOOL  _suspended;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) UIColor *defaultBackgroundColorWhileHosting;
@property (nonatomic, copy) UIColor *defaultBackgroundColorWhileNotHosting;
@property (nonatomic) unsigned int defaultHostedLayerTypes;
@property (nonatomic) <FBSceneHostManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isInvalidated, nonatomic, readonly) BOOL invalidated;
@property (nonatomic, readonly, retain) FBScene *scene;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic, readonly) BOOL suspended;

- (void)_activateRequester:(id)arg1;
- (id)_activeHostRequester;
- (id)_hostViewForRequester:(id)arg1;
- (id)_hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2;
- (id)_overrideRequesterIfNecessary:(id)arg1;
- (id)_snapshotContextForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 excludedContextIDs:(id)arg2 opaque:(BOOL)arg3 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg4;
- (id)_snapshotContextForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 excludedLayers:(id)arg2 opaque:(BOOL)arg3;
- (void)_updateActiveHostRequester;
- (id)_wrapperViewForRequester:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)defaultBackgroundColorWhileHosting;
- (id)defaultBackgroundColorWhileNotHosting;
- (unsigned int)defaultHostedLayerTypes;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)disableHostingForReason:(id)arg1;
- (void)disableHostingForRequester:(id)arg1;
- (void)enableHostingForRequester:(id)arg1 orderFront:(BOOL)arg2;
- (void)enableHostingForRequester:(id)arg1 priority:(int)arg2;
- (id)hostViewForRequester:(id)arg1;
- (id)hostViewForRequester:(id)arg1 appearanceStyle:(unsigned int)arg2;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2 appearanceStyle:(unsigned int)arg3;
- (id)identifier;
- (id)initWithLayerManager:(id)arg1 scene:(id)arg2;
- (void)invalidate;
- (BOOL)isInvalidated;
- (BOOL)isSuspended;
- (void)orderRequesterFront:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)resumeLayerHosting;
- (id)scene;
- (void)sceneLayerHostContainerViewHostedLayersDidChange:(id)arg1;
- (void)setContextId:(unsigned int)arg1 hidden:(BOOL)arg2 forRequester:(id)arg3;
- (void)setDefaultBackgroundColorWhileHosting:(id)arg1;
- (void)setDefaultBackgroundColorWhileNotHosting:(id)arg1;
- (void)setDefaultHostedLayerTypes:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLayer:(id)arg1 hidden:(BOOL)arg2 forRequester:(id)arg3;
- (struct CGImage { }*)snapshotCGImageRefForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg4;
- (id)snapshotContextForRequester:(id)arg1;
- (struct __IOSurface { }*)snapshotIOSurfaceForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg4;
- (id)snapshotUIImageForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg4;
- (id)snapshotViewForSnapshot:(id)arg1;
- (id)snapshotViewWithContext:(id)arg1;
- (id)snapshotViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)suspendLayerHosting;
- (id)visibleContexts;
- (id)visibleLayers;
- (id)visibleLayersForRequester:(id)arg1;

@end
