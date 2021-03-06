/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PrintKit/PrintKit-Structs.h>
@class NSString, NSArray;

@interface PKSupply : NSObject {

	int _level;
	int _lowLevel;
	int _highLevel;
	NSString* _name;
	NSString* _markerType;
	NSArray* _colors;
	unsigned long long _supplyType;

}

@property (nonatomic,retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * markerType;                      //@synthesize markerType=_markerType - In the implementation block
@property (nonatomic,retain) NSArray * colors;                           //@synthesize colors=_colors - In the implementation block
@property (assign,nonatomic) int level;                                  //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) int lowLevel;                               //@synthesize lowLevel=_lowLevel - In the implementation block
@property (assign,nonatomic) int highLevel;                              //@synthesize highLevel=_highLevel - In the implementation block
@property (assign,nonatomic) unsigned long long supplyType;              //@synthesize supplyType=_supplyType - In the implementation block
+(id)suppliesForIPPResponse:(ipp_s*)arg1 ;
+(const char**)requiredIPPAttributes;
+(unsigned long long)numRequiredIPPAttributes;
+(BOOL)isValidColorString:(const char*)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(NSArray *)colors;
-(NSString *)markerType;
-(id)initWithName:(const char*)arg1 markerType:(const char*)arg2 colors:(const char*)arg3 level:(int)arg4 lowLevel:(int)arg5 highLevel:(int)arg6 ;
-(unsigned long long)supplyType;
-(int)lowLevel;
-(int)highLevel;
-(void)setMarkerType:(NSString *)arg1 ;
-(void)setLowLevel:(int)arg1 ;
-(void)setHighLevel:(int)arg1 ;
-(void)setSupplyType:(unsigned long long)arg1 ;
@end

