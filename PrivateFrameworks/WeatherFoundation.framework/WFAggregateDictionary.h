/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFAggregateDictionary : NSObject {
    NSString * _domain;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _requestFailures;
    unsigned int  _requestSuccesses;
}

@property (nonatomic, copy) NSString *domain;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned int requestFailures;
@property (nonatomic) unsigned int requestSuccesses;

+ (id)defaultAggregateDictionary;

- (void).cxx_destruct;
- (void)_queue_addValueForScalarKey:(id)arg1 value:(int)arg2;
- (void)_queue_pushValue:(double)arg1 forKey:(id)arg2;
- (id)domain;
- (id)init;
- (void)logLocationAccuracy:(double)arg1;
- (void)logRequestFailure;
- (void)logRequestSuccess;
- (id)queue;
- (unsigned int)requestFailures;
- (unsigned int)requestSuccesses;
- (void)setDomain:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequestFailures:(unsigned int)arg1;
- (void)setRequestSuccesses:(unsigned int)arg1;

@end
