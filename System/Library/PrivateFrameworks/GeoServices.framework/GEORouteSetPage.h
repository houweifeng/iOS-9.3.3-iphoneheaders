/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTransitRoutingIncidentMessage;
@class GEODirectionsRouteRequest, GEODirectionsRouteResponse, GEORouteSet, NSArray, NSMutableDictionary, NSMutableArray, GEOComposedRoute, NSDictionary;

@interface GEORouteSetPage : NSObject {

	GEODirectionsRouteRequest* _request;
	GEODirectionsRouteResponse* _response;
	GEORouteSet* _routeSet;
	NSArray* _routes;
	NSArray* _routesAndGaps;
	NSArray* _routesAndContingencies;
	NSMutableDictionary* _composedRoutesDict;
	NSMutableDictionary* _routesDict;
	NSMutableDictionary* _constructedRouteDict;
	NSMutableDictionary* _routeConnectionTable;
	NSMutableDictionary* _routeUniquePointRangeDict;
	NSMutableDictionary* _alternateStartRoutesLookup;
	NSMutableArray* _contingentStartRoutes;
	NSMutableArray* _contingentMiddleRoutes;
	GEOComposedRoute* _preferredRoute;
	id<GEOTransitRoutingIncidentMessage> _transitRoutingIncidentMessage;
	BOOL _isNavigable;

}

@property (nonatomic,readonly) BOOL isNavigable;                                                                //@synthesize isNavigable=_isNavigable - In the implementation block
@property (nonatomic,readonly) GEODirectionsRouteRequest * request;                                             //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) GEODirectionsRouteResponse * response;                                           //@synthesize response=_response - In the implementation block
@property (assign,nonatomic,__weak) GEORouteSet * routeSet;                                                     //@synthesize routeSet=_routeSet - In the implementation block
@property (nonatomic,readonly) NSArray * routes;                                                                //@synthesize routes=_routes - In the implementation block
@property (nonatomic,readonly) NSArray * routesAndGaps;                                                         //@synthesize routesAndGaps=_routesAndGaps - In the implementation block
@property (nonatomic,readonly) NSArray * routesAndContingencies; 
@property (nonatomic,readonly) NSDictionary * alternateStartRoutesLookup; 
@property (nonatomic,readonly) GEOComposedRoute * preferredRoute;                                               //@synthesize preferredRoute=_preferredRoute - In the implementation block
@property (nonatomic,readonly) BOOL transitModePreferencesIgnored; 
@property (nonatomic,readonly) BOOL allTransitRoutesBlockedByIncident; 
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitRoutingIncidentMessage;              //@synthesize transitRoutingIncidentMessage=_transitRoutingIncidentMessage - In the implementation block
-(void)dealloc;
-(GEODirectionsRouteRequest *)request;
-(GEODirectionsRouteResponse *)response;
-(BOOL)isNavigable;
-(NSArray *)routes;
-(void)setRouteSet:(GEORouteSet *)arg1 ;
-(id<GEOTransitRoutingIncidentMessage>)transitRoutingIncidentMessage;
-(GEORouteSet *)routeSet;
-(BOOL)allTransitRoutesBlockedByIncident;
-(void)_stitchRoutesFromArray:(id)arg1 addToRoutes:(id)arg2 includeDepartureRoutes:(BOOL)arg3 ;
-(void)_buildRoutesAndGapsForResponse:(id)arg1 ;
-(NSArray *)routesAndContingencies;
-(id)initWithRequest:(id)arg1 response:(id)arg2 routeSet:(id)arg3 ;
-(void)_createIncidentsOnRoute:(id)arg1 ;
-(id)initWithReroute:(id)arg1 ;
-(void)_buildAllRouteTypes:(id)arg1 ;
-(void)_attachAlternateStartRoute:(id)arg1 toRouteID:(id)arg2 ;
-(id)_composedRouteForRoute:(id)arg1 ;
-(NSDictionary *)alternateStartRoutesLookup;
-(NSArray *)routesAndGaps;
-(GEOComposedRoute *)preferredRoute;
-(BOOL)transitModePreferencesIgnored;
-(void)_setupDriveWalkRoutesForResponse:(id)arg1 ;
-(void)_createAlternateStartRoutesLookup;
-(void)_setupTransitRoutesForResponse:(id)arg1 ;
@end

