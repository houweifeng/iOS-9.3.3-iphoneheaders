/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXMosaicGalleryLayouterDataSource;
#import <Silex/Silex-Structs.h>
@class NSArray, SXMosaicGalleryColumnLayout, NSMutableArray;

@interface SXMosaicGalleryLayouter : NSObject {

	BOOL _reverseNextHorizontalLivingRoomLayout;
	unsigned long long _numberOfItems;
	double _width;
	NSArray* _supportedTileTypeClusters;
	id<SXMosaicGalleryLayouterDataSource> _dataSource;
	SXMosaicGalleryColumnLayout* _columnLayout;
	NSMutableArray* _layouts;
	NSMutableArray* _clusters;
	NSMutableArray* _items;
	NSMutableArray* _views;
	NSMutableArray* _frames;
	CGSize _contentSize;

}

@property (assign,nonatomic,__weak) id<SXMosaicGalleryLayouterDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                                 //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) SXMosaicGalleryColumnLayout * columnLayout;                         //@synthesize columnLayout=_columnLayout - In the implementation block
@property (nonatomic,readonly) NSMutableArray * layouts;                                           //@synthesize layouts=_layouts - In the implementation block
@property (nonatomic,readonly) NSMutableArray * clusters;                                          //@synthesize clusters=_clusters - In the implementation block
@property (nonatomic,readonly) NSMutableArray * items;                                             //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSMutableArray * views;                                             //@synthesize views=_views - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfItems;                                   //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) double width;                                                         //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) NSArray * supportedTileTypeClusters;                                //@synthesize supportedTileTypeClusters=_supportedTileTypeClusters - In the implementation block
@property (nonatomic,readonly) NSMutableArray * frames;                                            //@synthesize frames=_frames - In the implementation block
@property (assign,nonatomic) BOOL reverseNextHorizontalLivingRoomLayout;                           //@synthesize reverseNextHorizontalLivingRoomLayout=_reverseNextHorizontalLivingRoomLayout - In the implementation block
-(SXMosaicGalleryColumnLayout *)columnLayout;
-(void)layoutGalleryOnView:(id)arg1 ;
-(id)viewForItemAtIndex:(unsigned long long)arg1 ;
-(void)calculateLayoutForWidth:(double)arg1 ;
-(id)clusterForItemsInRange:(NSRange)arg1 ;
-(id)layoutForCluster:(id)arg1 previousLayouts:(id)arg2 ;
-(id)viewForItem:(id)arg1 ;
-(id)itemsForRange:(NSRange)arg1 ;
-(NSArray *)supportedTileTypeClusters;
-(BOOL)reverseNextHorizontalLivingRoomLayout;
-(void)setReverseNextHorizontalLivingRoomLayout:(BOOL)arg1 ;
-(void)setDataSource:(id<SXMosaicGalleryLayouterDataSource>)arg1 ;
-(id<SXMosaicGalleryLayouterDataSource>)dataSource;
-(CGSize)contentSize;
-(void)reset;
-(NSMutableArray *)items;
-(double)width;
-(unsigned long long)numberOfItems;
-(void)setWidth:(double)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)clusters;
-(id)initWithDataSource:(id)arg1 ;
-(NSMutableArray *)views;
-(void)resetLayout;
-(CGRect)frameForItemAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)layouts;
-(NSMutableArray *)frames;
@end
