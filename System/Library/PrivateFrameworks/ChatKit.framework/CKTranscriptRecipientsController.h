/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@protocol CKTranscriptRecipientsControllerDelegate;
@class CKConversation, NSString, NSDictionary, CKTranscriptAddRecipientCell, CKTranscriptLocationShareCell, CKTranscriptDetailsResizableCell, CKTranscriptRecipientCell, UITextView, NSTimer, CKEntity, CKGroupRecipientSelectionController;

@interface CKTranscriptRecipientsController : UITableViewController <UIActionSheetDelegate, UIAlertViewDelegate, UITextViewDelegate, CNAvatarViewDelegate> {

	BOOL _fmfDisabled;
	BOOL _fmfRestricted;
	CKConversation* _conversation;
	id<CKTranscriptRecipientsControllerDelegate> _delegate;
	NSString* _serviceAvailabilityKey;
	NSDictionary* _facetimeIDStatuses;
	NSDictionary* _facetimeAudioIDStatuses;
	CKTranscriptAddRecipientCell* _addRecipientCell;
	CKTranscriptLocationShareCell* _locationShareCell;
	CKTranscriptDetailsResizableCell* _locationSendCell;
	CKTranscriptDetailsResizableCell* _locationStartShareCell;
	CKTranscriptRecipientCell* _sizingRecipientCell;
	UITextView* _locationSharingTextView;
	NSTimer* _fmfUpdateTimer;
	CKEntity* _entityForPresentedABCard;
	CKGroupRecipientSelectionController* _addRecipientsController;

}

@property (nonatomic,retain) CKConversation * conversation;                                              //@synthesize conversation=_conversation - In the implementation block
@property (assign,nonatomic) id<CKTranscriptRecipientsControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * serviceAvailabilityKey;                                          //@synthesize serviceAvailabilityKey=_serviceAvailabilityKey - In the implementation block
@property (nonatomic,retain) NSDictionary * facetimeIDStatuses;                                          //@synthesize facetimeIDStatuses=_facetimeIDStatuses - In the implementation block
@property (nonatomic,retain) NSDictionary * facetimeAudioIDStatuses;                                     //@synthesize facetimeAudioIDStatuses=_facetimeAudioIDStatuses - In the implementation block
@property (nonatomic,retain) CKTranscriptAddRecipientCell * addRecipientCell;                            //@synthesize addRecipientCell=_addRecipientCell - In the implementation block
@property (nonatomic,retain) CKTranscriptLocationShareCell * locationShareCell;                          //@synthesize locationShareCell=_locationShareCell - In the implementation block
@property (nonatomic,retain) CKTranscriptDetailsResizableCell * locationSendCell;                        //@synthesize locationSendCell=_locationSendCell - In the implementation block
@property (nonatomic,retain) CKTranscriptDetailsResizableCell * locationStartShareCell;                  //@synthesize locationStartShareCell=_locationStartShareCell - In the implementation block
@property (nonatomic,retain) CKTranscriptRecipientCell * sizingRecipientCell;                            //@synthesize sizingRecipientCell=_sizingRecipientCell - In the implementation block
@property (nonatomic,retain) UITextView * locationSharingTextView;                                       //@synthesize locationSharingTextView=_locationSharingTextView - In the implementation block
@property (nonatomic,retain) NSTimer * fmfUpdateTimer;                                                   //@synthesize fmfUpdateTimer=_fmfUpdateTimer - In the implementation block
@property (assign,nonatomic) BOOL fmfDisabled;                                                           //@synthesize fmfDisabled=_fmfDisabled - In the implementation block
@property (assign,nonatomic) BOOL fmfRestricted;                                                         //@synthesize fmfRestricted=_fmfRestricted - In the implementation block
@property (nonatomic,retain) CKEntity * entityForPresentedABCard;                                        //@synthesize entityForPresentedABCard=_entityForPresentedABCard - In the implementation block
@property (nonatomic,retain) CKGroupRecipientSelectionController * addRecipientsController;              //@synthesize addRecipientsController=_addRecipientsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CKTranscriptRecipientsControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<CKTranscriptRecipientsControllerDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(id)recipients;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKConversation *)conversation;
-(void)_handleFriendshipStatusChangedNotification:(id)arg1 ;
-(void)_handleLocationChangedNotification:(id)arg1 ;
-(void)_conversationJoinStateDidChange:(id)arg1 ;
-(BOOL)_conversationHasLeft;
-(id)initWithStyle:(long long)arg1 conversation:(id)arg2 ;
-(UITextView *)locationSharingTextView;
-(void)setLocationSharingTextView:(UITextView *)arg1 ;
-(void)setServiceAvailabilityKey:(NSString *)arg1 ;
-(NSString *)serviceAvailabilityKey;
-(void)_faceTimeAvailabilityChange:(id)arg1 ;
-(void)_handleActiveDeviceChanged:(id)arg1 ;
-(void)_handleConversationRecipientsChanged:(id)arg1 ;
-(void)_handleAddressBookChangedNotification:(id)arg1 ;
-(void)setFmfDisabled:(BOOL)arg1 ;
-(void)setFmfRestricted:(BOOL)arg1 ;
-(void)_refreshFaceTimeIDSStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)_setupFMFUpdateTimerIfNecessary;
-(BOOL)_shouldShowEnhancedGroupFeatures;
-(void)setAddRecipientCell:(CKTranscriptAddRecipientCell *)arg1 ;
-(void)setEntityForPresentedABCard:(CKEntity *)arg1 ;
-(BOOL)fmfDisabled;
-(CKTranscriptRecipientCell *)sizingRecipientCell;
-(CKTranscriptLocationShareCell *)locationShareCell;
-(CKTranscriptDetailsResizableCell *)locationStartShareCell;
-(CKTranscriptDetailsResizableCell *)locationSendCell;
-(CKTranscriptAddRecipientCell *)addRecipientCell;
-(id)recipientCellForIndexPath:(id)arg1 ;
-(id)dndCellForIndexPath:(id)arg1 ;
-(id)leaveCellForIndexPath:(id)arg1 ;
-(id)locationCellForIndexPath:(id)arg1 ;
-(BOOL)_shouldShowActiveDeviceSwitchFooter;
-(BOOL)fmfRestricted;
-(void)_presentGroupRecipientSelectionController;
-(void)_sendCurrentLocation;
-(void)_presentSharingActionSheet:(BOOL)arg1 fromView:(id)arg2 ;
-(void)_presentLeaveActionSheetFromView:(id)arg1 ;
-(void)_presentRemoveRecipientSheetForRecipient:(id)arg1 fromView:(id)arg2 ;
-(void)_handleCancelAction:(id)arg1 ;
-(void)_handleDoneAction:(id)arg1 ;
-(void)setAddRecipientsController:(CKGroupRecipientSelectionController *)arg1 ;
-(void)_configureRecipientCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureDNDCell:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_showFaceTimeVideoButtonForEntity:(id)arg1 ;
-(BOOL)_showEmailButtonForEntity:(id)arg1 ;
-(BOOL)_showPhoneButtonForEntity:(id)arg1 ;
-(void)sendEmailAction:(id)arg1 ;
-(void)facetimeVideoAction:(id)arg1 ;
-(void)phoneCallAction:(id)arg1 ;
-(void)infoAction:(id)arg1 ;
-(BOOL)_isTelephonyDevice;
-(long long)_facetimeAudioIDStatusForEntity:(id)arg1 ;
-(BOOL)_isFaceTimeAudioAvailable;
-(BOOL)_hasLinkedTelephoneNumbersForEntity:(id)arg1 ;
-(BOOL)_isFaceTimeVideoAvailable;
-(long long)_facetimeIDStatusForEntity:(id)arg1 ;
-(void)_muteSwitchValueChanged:(id)arg1 ;
-(void)setFacetimeIDStatuses:(NSDictionary *)arg1 ;
-(void)setFacetimeAudioIDStatuses:(NSDictionary *)arg1 ;
-(NSDictionary *)facetimeIDStatuses;
-(NSDictionary *)facetimeAudioIDStatuses;
-(id)indexPathForButton:(id)arg1 ;
-(id)entityForButton:(id)arg1 ;
-(void)_startEmailCommunicationWithEntity:(id)arg1 ;
-(void)_startCommunicationForEntity:(id)arg1 ;
-(void)_startFacetimeCommunicationForEntity:(id)arg1 audioOnly:(BOOL)arg2 ;
-(void)_showContactCardForEntity:(id)arg1 fromView:(id)arg2 ;
-(void)_requestCallTypeForEntity:(id)arg1 withAddresses:(id)arg2 withLabels:(id)arg3 faceTimeAudioEnabled:(BOOL)arg4 ;
-(void)_startCallWithAddress:(id)arg1 entity:(id)arg2 ;
-(void)_toggleSharingStateFromABCard;
-(CKEntity *)entityForPresentedABCard;
-(CKGroupRecipientSelectionController *)addRecipientsController;
-(NSTimer *)fmfUpdateTimer;
-(void)_updateTimedFMFState;
-(void)setFmfUpdateTimer:(NSTimer *)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(void)setLocationShareCell:(CKTranscriptLocationShareCell *)arg1 ;
-(void)setLocationSendCell:(CKTranscriptDetailsResizableCell *)arg1 ;
-(void)setLocationStartShareCell:(CKTranscriptDetailsResizableCell *)arg1 ;
-(void)setSizingRecipientCell:(CKTranscriptRecipientCell *)arg1 ;
@end

