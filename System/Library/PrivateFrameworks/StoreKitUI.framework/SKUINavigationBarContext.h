/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIClientContext, NSOperationQueue, UIViewController, SKUIResourceLoader, SKUILayoutCache;

@interface SKUINavigationBarContext : NSObject {

	SKUIClientContext* _clientContext;
	double _maximumNavigationBarWidth;
	NSOperationQueue* _operationQueue;
	UIViewController* _parentViewController;
	SKUIResourceLoader* _resourceLoader;
	SKUILayoutCache* _textLayoutCache;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                           //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) double maximumNavigationBarWidth;                            //@synthesize maximumNavigationBarWidth=_maximumNavigationBarWidth - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) SKUIResourceLoader * resourceLoader;                         //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (nonatomic,retain) SKUILayoutCache * textLayoutCache;                           //@synthesize textLayoutCache=_textLayoutCache - In the implementation block
-(UIViewController *)parentViewController;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(SKUIResourceLoader *)resourceLoader;
-(SKUILayoutCache *)textLayoutCache;
-(void)setResourceLoader:(SKUIResourceLoader *)arg1 ;
-(double)maximumNavigationBarWidth;
-(void)setMaximumNavigationBarWidth:(double)arg1 ;
-(void)setTextLayoutCache:(SKUILayoutCache *)arg1 ;
@end

