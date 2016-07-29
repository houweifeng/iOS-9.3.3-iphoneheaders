/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSMutableArray, SKUIHeaderViewElement, NSArray;

@interface SKUITracklistViewElement : SKUIViewElement {

	NSMutableArray* _sections;
	NSMutableArray* _tracks;

}

@property (nonatomic,readonly) SKUIHeaderViewElement * header; 
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * tracks; 
-(NSArray *)sections;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(void)enumerateTracksUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)tracks;
-(SKUIHeaderViewElement *)header;
@end
