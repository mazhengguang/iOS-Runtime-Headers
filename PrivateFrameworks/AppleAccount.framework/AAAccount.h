/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSOperationQueue, NSString, NSArray, NSLock, NSDictionary;

@interface AAAccount : BasicAccount <ASDynamicAccountClassLoader> {
    NSString *_cachedPassword;
    NSString *_cachedToken;
    NSString *_unsavedToken;
    NSString *_cachedCommerceToken;
    NSOperationQueue *_requesterQueue;
    NSLock *_tokenLock;
    NSLock *_passwordLock;
}

@property(copy) NSString * username;
@property(copy) NSString * password;
@property(readonly) NSString * authToken;
@property(readonly) NSString * personID;
@property(readonly) NSString * firstName;
@property(readonly) NSString * lastName;
@property(readonly) NSString * primaryEmail;
@property(readonly) NSArray * appleIDAliases;
@property BOOL primaryAccount;
@property(readonly) BOOL primaryEmailVerified;
@property(readonly) BOOL needsRegistration;
@property(readonly) BOOL serviceUnavailable;
@property(readonly) NSDictionary * serviceUnavailableInfo;
@property(readonly) NSArray * provisionedDataclasses;
@property(readonly) NSDictionary * dataclassProperties;
@property(readonly) int accountServiceType;
@property(readonly) int mobileMeAccountStatus;

+ (id)dataclassesBoundToSingleAccount;
+ (id)dataclassesBoundToSyncAccount;
+ (id)dataclassesBoundToPrimaryAccount;
+ (id)classicAccountTypeString;
+ (id)accountWithBasicAccount:(id)arg1;
+ (id)supportedDataclasses;
+ (id)propertiesWhichRequireValidation;
+ (BOOL)loadBundleForAccountWithProperties:(id)arg1;
+ (id)basicAccountProperties;
+ (id)accountTypeString;
+ (id)configuredSyncAccountName;
+ (BOOL)doesConfiguredSyncAccountExist;
+ (void)setAOSEnabled:(BOOL)arg1;
+ (BOOL)isAOSEnabled;

- (void)removeAppleIDCerts;
- (BOOL)needsEmailConfiguration;
- (id)accountFirstDisplayAlert;
- (id)accountFooterButton;
- (id)accountFooterText;
- (void)removePasswordFromKeychain;
- (void)savePasswordInKeychain;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1;
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1;
- (void)cancelNetworkActivity;
- (void)resendVerificationEmail:(id)arg1;
- (void)registerWithHandler:(id)arg1;
- (void)setUseCellular:(BOOL)arg1 forDataclass:(id)arg2;
- (BOOL)useCellularForDataclass:(id)arg1;
- (id)serviceUnavailableInfo;
- (BOOL)serviceUnavailable;
- (BOOL)needsRegistration;
- (void)addChildAccount:(id)arg1;
- (void)_performiCloudMigration;
- (id)appleIDAliases;
- (BOOL)primaryEmailVerified;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1 withHandler:(id)arg2;
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1 withHandler:(id)arg2;
- (id)_deviceSpecificLocalizedString:(id)arg1;
- (void)_setToken:(id)arg1;
- (void)signInWithHandler:(id)arg1;
- (id)_errorWithDescriptionForResponseError:(id)arg1;
- (void)configureAppleIDCerts;
- (void)updateAccountWithProvisioningResponse:(id)arg1;
- (void)setLocationAuthorizationForDeviceLocator:(BOOL)arg1;
- (int)accountServiceType;
- (id)_mailChildAccountProperties;
- (void)removeTokensFromKeychain;
- (void)flushCachedPassword;
- (void)flushCachedTokens;
- (void)authenticateWithHandler:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (id)syncStoreIdentifier;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (id)authToken;
- (id)lastName;
- (id)firstName;
- (void)updateAccountPropertiesWithHandler:(id)arg1;
- (void)saveTokensInKeychain;
- (BOOL)isProvisionedForDataclass:(id)arg1;
- (void)removeChildAccountWithIdentifier:(id)arg1;
- (void)setupChildMailAccountAndEnable:(BOOL)arg1 withEmail:(id)arg2;
- (id)propertiesForDataclass:(id)arg1;
- (void)notifyUserOfQuotaDepletion;
- (BOOL)becomeConfiguredSyncAccount;
- (BOOL)isConfiguredSyncAccount;
- (id)provisionedDataclasses;
- (id)displayName;
- (id)initWithProperties:(id)arg1;
- (id)password;
- (id)personID;
- (int)mobileMeAccountStatus;
- (id)description;
- (void)dealloc;
- (id)primaryEmail;
- (id)dataclassProperties;
- (void)setPrimaryAccount:(BOOL)arg1;
- (BOOL)primaryAccount;

@end