/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKQuickRouteManager : NSObject {
    double  _closeWalkTravelTime;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    <MKQuickRouteManagerDelegate> * _delegate;
    _MKRouteETAFetcher * _etaFetcher;
    BOOL  _fetchAllTransportTypes;
    _MKRouteETA * _lastETA;
    NSError * _lastError;
    unsigned int  _lastPreferredDirectionsType;
    double  _maxDistanceToRequestETA;
    double  _maxWalkingDistance;
    <MKQuickRouteTransportTypeFinding> * _transportTypeFinder;
    NSObject<MKQuickRouteConfigurableView> * _view;
    BOOL  _viewHasChangedSinceLastUpdate;
}

@property (nonatomic, copy) GEOAutomobileOptions *automobileOptions;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic) <MKQuickRouteManagerDelegate> *delegate;
@property (nonatomic) BOOL fetchAllTransportTypes;
@property (nonatomic, readonly) BOOL isOnlyDriving;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, retain) MKMapItem *originMapItem;
@property (nonatomic, copy) GEOTransitOptions *transitOptions;
@property (nonatomic) <MKQuickRouteTransportTypeFinding> *transportTypeFinder;
@property (getter=isUsingCurrentLocationForOrigin, nonatomic, readonly) BOOL usingCurrentLocationForOrigin;
@property (nonatomic) NSObject<MKQuickRouteConfigurableView> *view;

+ (double)_maxDistanceToRequestETA;
+ (unsigned int)counterpartForTransportType:(unsigned int)arg1;
+ (unsigned int)directionsTypeForMapItem:(id)arg1 delegate:(id)arg2 mapType:(unsigned int)arg3;
+ (BOOL)isLikelyToReturnETAForLocation:(id)arg1;

- (void).cxx_destruct;
- (void)_performWithTransportType:(id /* block */)arg1;
- (void)_resetState;
- (BOOL)_transportTypeShouldBeSmart;
- (id)automobileOptions;
- (id)bestETAForPreferredDirectionsType:(unsigned int)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)delegate;
- (id)description;
- (struct CLLocationCoordinate2D { double x1; double x2; })destinationCoordinate;
- (unsigned int)directionsTypeForMapType:(unsigned int)arg1;
- (unsigned int)directionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 destinationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 preferredDirectionsType:(unsigned int)arg3;
- (BOOL)fetchAllTransportTypes;
- (unsigned int)guessTransportTypeForDistance:(double)arg1 preferredDirectionsType:(unsigned int)arg2;
- (BOOL)haveETAsForPreferredTransportType:(unsigned int)arg1;
- (id)init;
- (BOOL)isOnlyDriving;
- (BOOL)isUsingCurrentLocationForOrigin;
- (void)loadETAsFromMapItemForTransportType:(unsigned int)arg1;
- (id)mapItem;
- (struct CLLocationCoordinate2D { double x1; double x2; })originCoordinate;
- (id)originMapItem;
- (void)requestNewETAForPreferredTransportType:(unsigned int)arg1 completion:(id /* block */)arg2;
- (id)routeETAForTransportType:(unsigned int)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchAllTransportTypes:(BOOL)arg1;
- (void)setMapItem:(id)arg1;
- (void)setOriginMapItem:(id)arg1;
- (void)setTransitOptions:(id)arg1;
- (void)setTransportTypeFinder:(id)arg1;
- (void)setView:(id)arg1;
- (id)transitOptions;
- (id)transportTypeFinder;
- (void)updateETA;
- (id)view;

@end
