/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UITableViewController.h>
#import <SpringBoard/SBMotionGestureObserver.h>

@protocol SBNCTableViewControllerDelegate;
@class NSMutableArray, NSMutableDictionary, SBNotificationRowActionFactory, NSString;

@interface SBNCTableViewController : UITableViewController <SBMotionGestureObserver> {

	id<SBNCTableViewControllerDelegate> _delegate;
	NSMutableArray* _orderedSections;
	NSMutableDictionary* _sectionIDsToRows;
	NSMutableDictionary* _reusableViewIDsToUnregisteredCellClassNames;
	NSMutableDictionary* _reusableViewIDsToUnregisteredHeaderClassNames;
	BOOL _tableViewNeedsReload;
	BOOL _animationsEnabled;
	struct {
		unsigned suppliesInsertionAnimation : 1;
		unsigned suppliesRemovalAnimation : 1;
		unsigned suppliesReplacementAnimation : 1;
		unsigned decidesHighlight : 1;
		unsigned interestedInSelection : 1;
		unsigned suppliesLayoutMode : 1;
	}  _notificationCenterTableViewControllerDelegateFlags;
	SBNotificationRowActionFactory* _cellButtonFactory;
	BOOL _usesTableViewSeparators;
	BOOL _canDismissBulletins;

}

@property (assign,nonatomic,__weak) id<SBNCTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGRect tableViewFrame; 
@property (assign,nonatomic) BOOL usesTableViewSeparators;                                     //@synthesize usesTableViewSeparators=_usesTableViewSeparators - In the implementation block
@property (assign,nonatomic) BOOL canDismissBulletins;                                         //@synthesize canDismissBulletins=_canDismissBulletins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateCachedLayoutData;
-(CGRect)tableViewFrame;
-(id)rowsInSectionWithIdentifier:(id)arg1 ;
-(id)orderedSections;
-(void)insertSection:(id)arg1 beforeSection:(id)arg2 ;
-(void)insertRow:(id)arg1 beforeRow:(id)arg2 inSection:(id)arg3 ;
-(void)removeRow:(id)arg1 inSection:(id)arg2 ;
-(void)replaceWithRow:(id)arg1 row:(id)arg2 inSection:(id)arg3 ;
-(void)invalidateData;
-(void)performOperationsWithoutAnimation:(/*^block*/id)arg1 ;
-(id)viewForRow:(id)arg1 inSection:(id)arg2 ;
-(void)invalidateSectionAndRowViewHeights:(/*^block*/id)arg1 ;
-(void)reloadTableViewDataIfNecessary;
-(void)reorderSections:(id)arg1 ;
-(void)moveSection:(id)arg1 beforeSection:(id)arg2 ;
-(void)replaceWithSection:(id)arg1 section:(id)arg2 ;
-(void)setTableViewNeedsReload;
-(void)setTableViewFrame:(CGRect)arg1 ;
-(unsigned long long)indexOfSection:(id)arg1 ;
-(void)addChildRowIfPossible:(id)arg1 ;
-(void)removeChildRowIfPossible:(id)arg1 ;
-(void)_updateMotionGestureObservation;
-(void)didReceiveRaiseGesture;
-(void)_updateEnhancedContrastSettings:(id)arg1 ;
-(void)_registerOrQueueReusableClass:(Class)arg1 forIdentifier:(id)arg2 registerBlock:(/*^block*/id)arg3 queueBlock:(/*^block*/id)arg4 ;
-(void)_registerOrQueueHeaderClassForInfo:(id)arg1 ;
-(void)_registerOrQueueCellClassForInfo:(id)arg1 ;
-(id)_viewIfLoaded;
-(void)_updateReusableViews;
-(void)_updateReusableView:(id)arg1 forInterfaceItemInfo:(id)arg2 withLayoutMode:(long long)arg3 ;
-(id)_sectionInfoAtIndexPath:(id)arg1 ;
-(id)_rowInfoAtIndexPath:(id)arg1 ;
-(void)_registerOrQueueReusableViewClassForInfo:(id)arg1 ;
-(BOOL)_insertSection:(id)arg1 atIndex:(unsigned long long)arg2 dryRun:(BOOL)arg3 ;
-(BOOL)_insertRow:(id)arg1 atIndex:(unsigned long long)arg2 inSection:(id)arg3 dryRun:(BOOL)arg4 ;
-(void)_reloadTableForOperationIfNecessary:(id)arg1 ;
-(BOOL)_removeSection:(id)arg1 dryRun:(BOOL)arg2 ;
-(BOOL)_removeRow:(id)arg1 fromSection:(id)arg2 dryRun:(BOOL)arg3 ;
-(BOOL)_moveSection:(id)arg1 toIndex:(unsigned long long)arg2 dryRun:(BOOL)arg3 ;
-(BOOL)_replaceWithSection:(id)arg1 section:(id)arg2 dryRun:(BOOL)arg3 ;
-(BOOL)_replaceWithRow:(id)arg1 row:(id)arg2 inSection:(id)arg3 dryRun:(BOOL)arg4 ;
-(void)_performInsertionOperation:(id)arg1 ;
-(void)_performRemovalOperation:(id)arg1 ;
-(void)_performMoveOperation:(id)arg1 ;
-(void)_reloadOrInvalidateTableViewData;
-(void)_performReplacementOperation:(id)arg1 ;
-(id)_representedBulletinAtIndexPath:(id)arg1 ;
-(void)_selectAction:(id)arg1 atIndexPath:(id)arg2 ;
-(long long)_sectionLocationAtIndexPath:(id)arg1 ;
-(BOOL)_hasFirstBulletinInSectionWithRaiseAction;
-(void)reloadSections:(id)arg1 withRowPopulator:(/*^block*/id)arg2 ;
-(void)addRow:(id)arg1 inSection:(id)arg2 ;
-(void)reloadRows:(id)arg1 inSection:(id)arg2 ;
-(BOOL)usesTableViewSeparators;
-(void)setUsesTableViewSeparators:(BOOL)arg1 ;
-(BOOL)canDismissBulletins;
-(void)setCanDismissBulletins:(BOOL)arg1 ;
-(void)setDelegate:(id<SBNCTableViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)indexPathForRow:(id)arg1 inSection:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<SBNCTableViewControllerDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)hasContent;
-(long long)_layoutMode;
-(void)_reloadTableViewData;
-(void)removeSection:(id)arg1 ;
@end
