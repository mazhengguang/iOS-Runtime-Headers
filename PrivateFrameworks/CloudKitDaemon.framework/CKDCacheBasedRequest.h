/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDCacheBasedRequest : NSObject {
    CKDKeyValueDiskCache * _cache;
    unsigned int  _fetchBatchSize;
    BOOL  _isCancelled;
    CKDPublicIdentityLookupService * _lookupService;
    CKDOperation * _operation;
}

@property (nonatomic) CKDKeyValueDiskCache *cache;
@property (nonatomic) unsigned int fetchBatchSize;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) CKDPublicIdentityLookupService *lookupService;
@property (nonatomic) CKDOperation *operation;

- (void).cxx_destruct;
- (id)cache;
- (void)cancel;
- (unsigned int)fetchBatchSize;
- (void)finishWithError:(id)arg1;
- (id)init;
- (BOOL)isCancelled;
- (id)lookupService;
- (id)operation;
- (void)performRequest;
- (void)setCache:(id)arg1;
- (void)setFetchBatchSize:(unsigned int)arg1;
- (void)setIsCancelled:(BOOL)arg1;
- (void)setLookupService:(id)arg1;
- (void)setOperation:(id)arg1;
- (id)spawnURLRequests;

@end