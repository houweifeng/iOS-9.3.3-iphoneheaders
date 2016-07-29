/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/VKLabelNavFeature.h>

@class VKLabelTile, NSMutableArray, VKLabelNavRoad, NSString, VKLabelNavRoadLabel, NSArray;

@interface VKLabelNavJunction : NSObject <VKLabelNavFeature> {

	VKLabelTile* _tile;
	Matrix<float, 2, 1> _tileCoordinate;
	SCD_Struct_VK473* _geoJunction;
	PolylineCoordinate _routeOffset;
	NSMutableArray* _roads;
	VKLabelNavRoad* _incomingRoad;
	VKLabelNavRoad* _outgoingRoad;
	float _distanceFromPreviousShieldLabel;
	int _preferredLabelPlacement;
	BOOL _isOnDualCarriageway;
	BOOL _hasSharedRouteDirection;
	Matrix<float, 2, 1> _sharedRouteDirection;
	BOOL _foundRoads;
	BOOL _isOverpass;
	BOOL _isRouteOverpass;
	int _largestRoadClass;
	SCD_Struct_VK520* _labelFeature;
	NSString* _name;
	VKLabelNavRoadLabel* _junctionSign;
	BOOL _areLabelsDisabled;
	unsigned long long _depthFromRoute;
	double _worldUnitsPerMeter;
	VKLabelNavJunction* _overpassJunction;
	VKPoint _worldCoordinate;
	double _sortValue;
	BOOL _isRouteRefineJunction;

}

@property (nonatomic,readonly) VKLabelTile * tile;                               //@synthesize tile=_tile - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_VK473* geoJunction;              //@synthesize geoJunction=_geoJunction - In the implementation block
@property (nonatomic,readonly) Matrix<float tileCoordinate;                      //@synthesize tileCoordinate=_tileCoordinate - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeOffset;                     //@synthesize routeOffset=_routeOffset - In the implementation block
@property (nonatomic,readonly) NSArray * roads;                                  //@synthesize roads=_roads - In the implementation block
@property (nonatomic,readonly) VKLabelNavRoad * outgoingRoad;                    //@synthesize outgoingRoad=_outgoingRoad - In the implementation block
@property (nonatomic,readonly) VKLabelNavRoad * incomingRoad;                    //@synthesize incomingRoad=_incomingRoad - In the implementation block
@property (assign,nonatomic) float distanceFromPreviousShieldLabel;              //@synthesize distanceFromPreviousShieldLabel=_distanceFromPreviousShieldLabel - In the implementation block
@property (assign,nonatomic) BOOL isOnDualCarriageway;                           //@synthesize isOnDualCarriageway=_isOnDualCarriageway - In the implementation block
@property (nonatomic,readonly) BOOL hasSharedRouteDirection;                     //@synthesize hasSharedRouteDirection=_hasSharedRouteDirection - In the implementation block
@property (assign,nonatomic) Matrix<float sharedRouteDirection;                  //@synthesize sharedRouteDirection=_sharedRouteDirection - In the implementation block
@property (nonatomic,readonly) BOOL isOnRoute; 
@property (nonatomic,readonly) BOOL isIntraRamp; 
@property (nonatomic,readonly) BOOL isTileEdgeJunction; 
@property (assign,nonatomic) BOOL isRouteRefineJunction;                         //@synthesize isRouteRefineJunction=_isRouteRefineJunction - In the implementation block
@property (nonatomic,readonly) BOOL isRoadTerminus; 
@property (nonatomic,readonly) BOOL isIntersection; 
@property (nonatomic,readonly) BOOL isMultiRoadIntersection; 
@property (nonatomic,readonly) BOOL isAwayFromRoute; 
@property (nonatomic,readonly) BOOL isOffRouteGraph; 
@property (nonatomic,readonly) BOOL isOverpass;                                  //@synthesize isOverpass=_isOverpass - In the implementation block
@property (assign,nonatomic) BOOL isRouteOverpass;                               //@synthesize isRouteOverpass=_isRouteOverpass - In the implementation block
@property (nonatomic,readonly) int largestRoadClass; 
@property (assign,nonatomic) unsigned long long depthFromRoute;                  //@synthesize depthFromRoute=_depthFromRoute - In the implementation block
@property (assign,nonatomic) VKLabelNavJunction * overpassJunction;              //@synthesize overpassJunction=_overpassJunction - In the implementation block
@property (nonatomic,readonly) double worldUnitsPerMeter;                        //@synthesize worldUnitsPerMeter=_worldUnitsPerMeter - In the implementation block
@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) VKLabelNavRoadLabel * junctionSign;               //@synthesize junctionSign=_junctionSign - In the implementation block
@property (nonatomic,readonly) int requiredLabelPlacement; 
@property (assign,nonatomic) int preferredLabelPlacement;                        //@synthesize preferredLabelPlacement=_preferredLabelPlacement - In the implementation block
@property (nonatomic,readonly) BOOL isRamp; 
@property (nonatomic,readonly) NSString * shieldDisplayGroup; 
@property (nonatomic,readonly) BOOL isStartOfRoadName; 
@property (nonatomic,readonly) BOOL isInGuidance; 
@property (nonatomic,readonly) long long intraRoadPriority; 
@property (nonatomic,readonly) BOOL isGuidanceStepStart; 
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(BOOL)isRamp;
-(PolylineCoordinate)routeOffset;
-(VKLabelTile *)tile;
-(double)worldUnitsPerMeter;
-(BOOL)isOnRoute;
-(VKLabelNavRoad *)outgoingRoad;
-(VKLabelNavRoad *)incomingRoad;
-(BOOL)isMultiRoadIntersection;
-(BOOL)isAwayFromRoute;
-(BOOL)isOnDualCarriageway;
-(int)requiredLabelPlacement;
-(BOOL)isIntraRamp;
-(BOOL)isInGuidance;
-(void)setPreferredLabelPlacement:(int)arg1 ;
-(NSArray *)roads;
-(BOOL)isGuidanceStepStart;
-(void)evaluateCrossStreets;
-(long long)intraRoadPriority;
-(BOOL)isStartOfRoadName;
-(void)evaluateCrossStreetsUsingRouteJunction:(id)arg1 ;
-(void)setDepthFromRoute:(unsigned long long)arg1 ;
-(void)createLabelWithNavContext:(NavContext*)arg1 isDrivingSideRight:(BOOL)arg2 ;
-(VKLabelNavRoadLabel *)junctionSign;
-(BOOL)isOverpass;
-(void)setIsRouteOverpass:(BOOL)arg1 ;
-(BOOL)isIntersection;
-(void)setDistanceFromPreviousShieldLabel:(float)arg1 ;
-(float)distanceFromPreviousShieldLabel;
-(BOOL)isRouteRefineJunction;
-(void)findRoads;
-(BOOL)matchesLocationForJunction:(id)arg1 ;
-(long long)_signOrientationWithDrivingSide:(BOOL)arg1 ;
-(int)preferredLabelPlacement;
-(Matrix<float)tileCoordinate;
-(VKPoint)_anchorCoordinateForSignOrientation:(long long)arg1 ;
-(NSString *)shieldDisplayGroup;
-(BOOL)isRoadTerminus;
-(const SCD_Struct_VK473*)geoJunction;
-(BOOL)isTileEdgeJunction;
-(id)initWithRoadEdge:(const SCD_Struct_VK476*)arg1 atA:(BOOL)arg2 routeOffset:(PolylineCoordinate)arg3 tile:(id)arg4 ;
-(BOOL)hasSharedRouteDirection;
-(void)setIsRouteRefineJunction:(BOOL)arg1 ;
-(unsigned long long)depthFromRoute;
-(void)addRouteEdge:(const VKLabelNavRouteRoadEdge*)arg1 atA:(BOOL)arg2 ;
-(id)initWithGEOJunction:(SCD_Struct_VK473*)arg1 routeOffset:(PolylineCoordinate)arg2 tile:(id)arg3 ;
-(void)setSharedRouteDirection:(Matrix<float)arg1 ;
-(BOOL)isOffRouteGraph;
-(Matrix<float)sharedRouteDirection;
-(void)setOverpassJunction:(VKLabelNavJunction *)arg1 ;
-(BOOL)isRouteOverpass;
-(VKLabelNavJunction *)overpassJunction;
-(int)largestRoadClass;
-(void)setIsOnDualCarriageway:(BOOL)arg1 ;
-(void)setRouteOffset:(PolylineCoordinate)arg1 ;
@end
