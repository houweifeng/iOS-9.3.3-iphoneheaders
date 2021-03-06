/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol ZWMenuLensEffectChooserViewControllerDelegate;
@class NSArray, NSString;

@interface ZWMenuLensEffectChooserViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	id<ZWMenuLensEffectChooserViewControllerDelegate> _delegate;
	NSArray* _lensEffectIdentifiers;

}

@property (assign,nonatomic,__weak) id<ZWMenuLensEffectChooserViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * lensEffectIdentifiers;                                                //@synthesize lensEffectIdentifiers=_lensEffectIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLensEffectIdentifiers:(NSArray *)arg1 ;
-(NSArray *)lensEffectIdentifiers;
-(void)setDelegate:(id<ZWMenuLensEffectChooserViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<ZWMenuLensEffectChooserViewControllerDelegate>)delegate;
-(void)loadView;
-(id)tableView;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

