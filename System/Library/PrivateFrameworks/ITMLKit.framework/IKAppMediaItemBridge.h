/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKAppMediaItem;
@class IKAppContext, IKJSMediaItem, NSString, NSNumber, NSArray;

@interface IKAppMediaItemBridge : NSObject {

	id<IKAppMediaItem> _appMediaItem;
	IKAppContext* _appContext;
	IKJSMediaItem* _jsMediaItem;

}

@property (nonatomic,readonly) id<IKAppMediaItem> appMediaItem;                 //@synthesize appMediaItem=_appMediaItem - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,__weak,readonly) IKJSMediaItem * jsMediaItem;              //@synthesize jsMediaItem=_jsMediaItem - In the implementation block
@property (nonatomic,retain) NSString * externalID; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * description; 
@property (nonatomic,retain) NSString * contentRatingDomain; 
@property (nonatomic,retain) NSNumber * contentRatingRanking; 
@property (nonatomic,retain) NSString * artworkImageURL; 
@property (nonatomic,retain) NSString * ratingBadge; 
@property (assign,nonatomic) BOOL isExplicit; 
@property (nonatomic,retain) NSNumber * resumeTime; 
@property (nonatomic,retain) NSArray * interstitials; 
@property (nonatomic,retain) NSArray * chapterGroups; 
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)url;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setUrl:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(id<IKAppMediaItem>)appMediaItem;
-(IKJSMediaItem *)jsMediaItem;
-(id)initWithJSMediaItem:(id)arg1 ;
-(void)setInterstitials:(NSArray *)arg1 ;
-(NSArray *)interstitials;
-(void)setChapterGroups:(NSArray *)arg1 ;
-(NSArray *)chapterGroups;
-(void)setContentRatingRanking:(NSNumber *)arg1 ;
-(NSNumber *)contentRatingRanking;
-(void)setRatingBadge:(NSString *)arg1 ;
-(NSString *)ratingBadge;
-(void)setArtworkImageURL:(NSString *)arg1 ;
-(NSString *)artworkImageURL;
-(void)setIsExplicit:(BOOL)arg1 ;
-(void)setResumeTime:(NSNumber *)arg1 ;
-(NSNumber *)resumeTime;
-(void)setContentRatingDomain:(NSString *)arg1 ;
-(NSString *)contentRatingDomain;
-(void)prepareForLoadingWithCallback:(/*^block*/id)arg1 ;
-(void)loadCertificateDataForURL:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)loadContentIdentifierDataForURL:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)loadKeyDataForURL:(id)arg1 keyRequestData:(id)arg2 withCallback:(/*^block*/id)arg3 ;
-(IKAppContext *)appContext;
-(BOOL)isExplicit;
@end
