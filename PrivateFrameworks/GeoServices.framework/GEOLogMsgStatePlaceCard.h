/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStatePlaceCard : PBCodable <NSCopying> {
    struct { 
        unsigned int placecardType : 1; 
    }  _has;
    GEOPlaceActionDetails * _placeActionDetails;
    NSString * _placecardCategory;
    int  _placecardType;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _possibleActions;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _unactionableUiElements;
}

@property (nonatomic, readonly) BOOL hasPlaceActionDetails;
@property (nonatomic, readonly) BOOL hasPlacecardCategory;
@property (nonatomic) BOOL hasPlacecardType;
@property (nonatomic, retain) GEOPlaceActionDetails *placeActionDetails;
@property (nonatomic, retain) NSString *placecardCategory;
@property (nonatomic) int placecardType;
@property (nonatomic, readonly) int*possibleActions;
@property (nonatomic, readonly) unsigned int possibleActionsCount;
@property (nonatomic, readonly) int*unactionableUiElements;
@property (nonatomic, readonly) unsigned int unactionableUiElementsCount;

- (int)StringAsPlacecardType:(id)arg1;
- (int)StringAsPossibleActions:(id)arg1;
- (int)StringAsUnactionableUiElements:(id)arg1;
- (void)addPossibleAction:(int)arg1;
- (void)addUnactionableUiElement:(int)arg1;
- (void)clearPossibleActions;
- (void)clearUnactionableUiElements;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPlaceActionDetails;
- (BOOL)hasPlacecardCategory;
- (BOOL)hasPlacecardType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeActionDetails;
- (id)placecardCategory;
- (int)placecardType;
- (id)placecardTypeAsString:(int)arg1;
- (int)possibleActionAtIndex:(unsigned int)arg1;
- (int*)possibleActions;
- (id)possibleActionsAsString:(int)arg1;
- (unsigned int)possibleActionsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setHasPlacecardType:(BOOL)arg1;
- (void)setPlaceActionDetails:(id)arg1;
- (void)setPlacecardCategory:(id)arg1;
- (void)setPlacecardType:(int)arg1;
- (void)setPossibleActions:(int*)arg1 count:(unsigned int)arg2;
- (void)setUnactionableUiElements:(int*)arg1 count:(unsigned int)arg2;
- (int)unactionableUiElementAtIndex:(unsigned int)arg1;
- (int*)unactionableUiElements;
- (id)unactionableUiElementsAsString:(int)arg1;
- (unsigned int)unactionableUiElementsCount;
- (void)writeTo:(id)arg1;

@end