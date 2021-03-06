/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITextViewInteractableItem.h>
#import <libobjc.A.dylib/DDDetectionControllerInteractionDelegate.h>

@class NSURL, LSAppLink, NSString;

@interface _UITextViewInteractableLink : _UITextViewInteractableItem <DDDetectionControllerInteractionDelegate> {

	NSURL* _link;
	LSAppLink* _appLink;

}

@property (nonatomic,retain) NSURL * link;                          //@synthesize link=_link - In the implementation block
@property (nonatomic,retain) LSAppLink * appLink;                   //@synthesize appLink=_appLink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interactableLinkWithURL:(id)arg1 range:(NSRange)arg2 subRange:(NSRange)arg3 ;
-(id)actions;
-(void)action:(id)arg1 didDismissAlertController:(id)arg2 ;
-(void)actionDidFinish:(id)arg1 ;
-(id)localizedTitle;
-(NSURL *)link;
-(BOOL)allowInteraction;
-(id)defaultAction;
-(void)setLink:(NSURL *)arg1 ;
-(id)dataDetectorActionsForTextView:(id)arg1 ;
-(id)linkActions;
-(void)_linkInteractionOpenURL;
-(void)setAppLink:(LSAppLink *)arg1 ;
-(void)_linkInteractionOpenURLInDefaultBrowser;
-(void)_linkInteractionOpenURLInExternalApplication;
-(void)_linkInteractionAddToReadingList;
-(void)_linkInteractionCopyLink;
-(void)_dataDetectorAction:(id)arg1 ;
-(BOOL)_linkInteractionPerformDefaultAction;
-(LSAppLink *)appLink;
@end

