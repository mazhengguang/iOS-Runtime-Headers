/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class <IMAVControllerDelegate>, NSArray, NSMutableArray;

@interface IMAVController : NSObject {
    BOOL _blockIncomingInvitationsDuringCall;
    BOOL _blockMultipleIncomingInvitations;
    BOOL _blockOutgoingInvitationsDuringCall;
    NSMutableArray *_delegates;
}

@property(retain) NSMutableArray * _delegates;
@property(readonly) BOOL _ready;
@property BOOL blockIncomingInvitationsDuringCall;
@property BOOL blockMultipleIncomingInvitations;
@property BOOL blockOutgoingInvitationsDuringCall;
@property(readonly) BOOL cameraCapable;
@property(readonly) BOOL cameraConnected;
@property <IMAVControllerDelegate> * delegate;
@property(readonly) NSArray * delegates;
@property(readonly) BOOL hasActiveConference;
@property(readonly) BOOL hasRunningConference;
@property(readonly) BOOL microphoneCapable;
@property(readonly) BOOL microphoneConnected;
@property(readonly) unsigned int overallChatState;

+ (void)initialize;
+ (id)sharedInstance;

- (id)_delegates;
- (void)_dumpCaps;
- (void)_markSetup;
- (BOOL)_ready;
- (void)_receivedPendingACRequests;
- (void)_receivedPendingVCRequests;
- (void)_setServiceVCCaps:(unsigned long long)arg1 toCaps:(unsigned long long)arg2;
- (BOOL)_shouldObserveConferences;
- (BOOL)_shouldRunACConferences;
- (BOOL)_shouldRunConferences;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (BOOL)blockIncomingInvitationsDuringCall;
- (BOOL)blockMultipleIncomingInvitations;
- (void)blockOnPendingVCInvitationsWithCapabilities:(int)arg1;
- (BOOL)blockOutgoingInvitationsDuringCall;
- (BOOL)cameraCapable;
- (BOOL)cameraConnected;
- (void)cancelVCRequestWithBuddy:(id)arg1 vcProps:(id)arg2 forAccount:(id)arg3 conferenceID:(id)arg4;
- (void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned int)arg2 vcProps:(id)arg3 conferenceID:(id)arg4;
- (void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned int)arg2 vcProps:(id)arg3 forAccount:(id)arg4 conferenceID:(id)arg5;
- (id)delegate;
- (id)delegates;
- (BOOL)hasActiveConference;
- (BOOL)hasRunningConference;
- (id)init;
- (BOOL)microphoneCapable;
- (BOOL)microphoneConnected;
- (unsigned int)overallChatState;
- (void)pushCachedVCCapsToDaemon;
- (void)removeDelegate:(id)arg1;
- (void)requestPendingACInvitations;
- (void)requestPendingVCInvitations;
- (void)setBlockIncomingInvitationsDuringCall:(BOOL)arg1;
- (void)setBlockMultipleIncomingInvitations:(BOOL)arg1;
- (void)setBlockOutgoingInvitationsDuringCall:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasActiveConference:(BOOL)arg1;
- (void)setHasRunningConference:(BOOL)arg1;
- (void)setIMAVCapabilities:(int)arg1 toCaps:(int)arg2;
- (void)set_delegates:(id)arg1;
- (void)setupIMAVController;
- (void)updateActiveConference;
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (id)vcResponseInfoWithSessionID:(unsigned int)arg1;

@end