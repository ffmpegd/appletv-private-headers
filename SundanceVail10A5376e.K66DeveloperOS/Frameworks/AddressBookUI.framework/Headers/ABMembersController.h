/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABContentController.h"
#import "ABMembersDataSourceDelegate.h"
#import "UITextFieldDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "ABSearchOperationDelegate.h"
#import "UISearchBarDelegate.h"
#import "AddressBookUI-Structs.h"

@class UISearchBar, UISearchDisplayController, UIViewController, NSOperationQueue, NSIndexPath, ABMembersDataSource, NSString, ABMembersFilteredDataSource, UIView;
@protocol ABMembersControllerSearchCompletionDelegate, ABStyleProvider, ABMembersControllerDelegate;

@interface ABMembersController : ABContentController <ABMembersDataSourceDelegate, UITextFieldDelegate, UISearchDisplayDelegate, ABSearchOperationDelegate, UISearchBarDelegate> {
	ABMembersDataSource *_membersDataSource;	// 16 = 0x10
	ABMembersFilteredDataSource *_searchDataSource;	// 20 = 0x14
	id<ABStyleProvider> _styleProvider;	// 24 = 0x18
	unsigned _cellsCreated;	// 28 = 0x1c
	unsigned _memberCount;	// 32 = 0x20
	UIView *_tableAccessoryView;	// 36 = 0x24
	UISearchBar *_searchBar;	// 40 = 0x28
	UISearchDisplayController *_searchController;	// 44 = 0x2c
	UIViewController *_parentViewController;	// 48 = 0x30
	unsigned _searchSequenceNumber;	// 52 = 0x34
	NSOperationQueue *_operationQueue;	// 56 = 0x38
	id<ABMembersControllerDelegate> _membersControllerDelegate;	// 60 = 0x3c
	BOOL _resumeForPhoneApp;	// 64 = 0x40
	BOOL _showingCardFromSearch;	// 65 = 0x41
	BOOL _wasKeyboardShowing;	// 66 = 0x42
	BOOL _shouldRestoreScrollPosition;	// 67 = 0x43
	BOOL _shouldDeactivateSearch;	// 68 = 0x44
	NSIndexPath *_selectedIndexPath;	// 72 = 0x48
	BOOL _searchEnabled;	// 76 = 0x4c
	BOOL _needToClearOldResults;	// 77 = 0x4d
	id<ABMembersControllerSearchCompletionDelegate> _searchCompletionDelegate;	// 80 = 0x50
}
@property(assign) unsigned cellsCreated;	// G=0x30fc9991; S=0x30fc99a1; converted property
@property(readonly, assign, nonatomic) NSString *currentSearchText;	// G=0x30fc2b1d; 
@property(readonly, assign, nonatomic) BOOL isServerSearchGroup;	// G=0x30f9244d; 
@property(assign, nonatomic) id<ABMembersControllerDelegate> membersControllerDelegate;	// G=0x30f9012d; S=0x30f8f7c9; @synthesize=_membersControllerDelegate
@property(readonly, retain) ABMembersDataSource *membersDataSource;	// G=0x30f9003d; converted property
@property(readonly, retain) NSOperationQueue *operationQueue;	// G=0x30fc2dfd; converted property
@property(assign, nonatomic) id<ABMembersControllerSearchCompletionDelegate> searchCompletionDelegate;	// G=0x30fc9cd5; S=0x30fc9ce5; @synthesize=_searchCompletionDelegate
@property(readonly, retain) ABMembersFilteredDataSource *searchDataSource;	// G=0x30f9113d; converted property
@property(assign, nonatomic, getter=isSearchEnabled) BOOL searchEnabled;	// G=0x30fc9cb5; S=0x30fc9cc5; @synthesize=_searchEnabled
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x30f8f705; S=0x30f8f715; @synthesize=_styleProvider
+ (id)newNameSearchOperationWithString:(id)string contactsFilter:(id)filter addressBook:(void *)book delegate:(id)delegate inOutSequenceNumber:(unsigned *)outSequenceNumber;	// 0x30fc2c91
- (id)initWithAddressBook:(void *)addressBook;	// 0x30f8f5b9
- (void)_applyStylesToTableView:(id)tableView;	// 0x30f90d31
- (void)_cancelGALSearch;	// 0x30fc319d
- (void)_deselectAllRowsWithAnimation;	// 0x30fc9ca1
- (id)_localizedStringForError:(int)error;	// 0x30fc9ac5
- (void)_reloadFontSizes;	// 0x30fc9715
- (void)_reselectLastSelectedCellIfNeeded;	// 0x30fbcd31
- (void)_searchForWords:(id)words;	// 0x30fc2b55
- (void *)_selectedPerson;	// 0x30fc969d
- (void)_setSelectedIndexPath:(id)path;	// 0x30f92565
- (BOOL)_shouldDeactivateOnCancelButtonClicked;	// 0x30fc9b89
- (void)_updateCountString;	// 0x30f91251
- (void)_updateEmptyTableViewAnimated:(BOOL)animated;	// 0x30f925ad
- (void)_updateNoContactsViewAnimated:(BOOL)animated;	// 0x30f92681
- (BOOL)abDataSource:(id)source selectedPerson:(void *)person atIndexPath:(id)indexPath withMemberCell:(id)memberCell animate:(BOOL)animate;	// 0x30f96d3d
- (BOOL)abDataSource:(id)source shouldAllowSelectingPersonWithRecordID:(int)recordID;	// 0x30f941c9
- (BOOL)abDataSourceAllowsShowingPersonsCards:(id)cards;	// 0x30fc34b9
- (id)accessoryView;	// 0x30fc99f1
- (void)cancelSearching:(id)searching;	// 0x30fc9ab1
- (void)cancelSearchingAnimated:(BOOL)animated;	// 0x30fc9a71
// converted property getter: - (unsigned)cellsCreated;	// 0x30fc9991
- (id)contactsFilter;	// 0x30f92475
- (id)contentView;	// 0x30f905d5
// declared property getter: - (id)currentSearchText;	// 0x30fc2b1d
- (id)currentTableView;	// 0x30f9250d
- (void)dealloc;	// 0x30fc935d
- (void)deselectAllRowsWithAnimation:(BOOL)animation;	// 0x30f924ad
- (void)didReceiveMemoryWarning;	// 0x30fc9975
- (void)displayedMembersListChanged;	// 0x30fc9c0d
- (int)globalIndexOfMember:(void *)member;	// 0x30fc97a5
// declared property getter: - (BOOL)isSearchEnabled;	// 0x30fc9cb5
- (BOOL)isSearching;	// 0x30f915c9
// declared property getter: - (BOOL)isServerSearchGroup;	// 0x30f9244d
- (void)loadState;	// 0x30f8f9f5
- (void)makeMainTableViewVisible;	// 0x30fbed59
// declared property getter: - (id)membersControllerDelegate;	// 0x30f9012d
// converted property getter: - (id)membersDataSource;	// 0x30f9003d
// converted property getter: - (id)operationQueue;	// 0x30fc2dfd
- (void)reload;	// 0x30fc9615
- (void)resetStateForDisplayedFilterChange;	// 0x30fc9a01
- (void)restoreScrollPosition;	// 0x30f92301
- (void)resume;	// 0x30fc992d
- (void)saveScrollPosition:(void *)position;	// 0x30f95d3d
- (void)saveState:(void *)state;	// 0x30f95d2d
- (void)searchBarCancelButtonClicked:(id)clicked;	// 0x30fc9b19
- (void)searchBarSearchButtonClicked:(id)clicked;	// 0x30fc9b71
- (void)searchBarTextDidBeginEditing:(id)searchBarText;	// 0x30fc29b9
// declared property getter: - (id)searchCompletionDelegate;	// 0x30fc9cd5
- (void)searchCurrentContactsGroupForWords:(id)words animated:(BOOL)animated;	// 0x3101918d
// converted property getter: - (id)searchDataSource;	// 0x30f9113d
- (void)searchDisplayController:(id)controller didLoadSearchResultsTableView:(id)view;	// 0x30fc2a4d
- (BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchString:(id)searchString;	// 0x30fc2a65
- (void)searchDisplayController:(id)controller willHideSearchResultsTableView:(id)view;	// 0x30fc9bf9
- (void)searchDisplayController:(id)controller willShowSearchResultsTableView:(id)view;	// 0x30fc2e61
- (void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;	// 0x30fc29dd
- (void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;	// 0x30fc9bad
- (void)searchOperation:(id)operation didFindMatches:(id)matches moreComing:(BOOL)coming;	// 0x30fc2edd
- (BOOL)selectAndScrollMemberVisible:(void *)visible;	// 0x30fc98ad
- (id)selectedCell;	// 0x30fc99b1
- (void)setAddressBook:(void *)book;	// 0x30fc963d
- (void)setBannerTitle:(id)title value:(id)value;	// 0x30f8fe91
// converted property setter: - (void)setCellsCreated:(unsigned)created;	// 0x30fc99a1
// declared property setter: - (void)setMembersControllerDelegate:(id)delegate;	// 0x30f8f7c9
- (void)setParentViewController:(id)controller;	// 0x30f8f6d1
// declared property setter: - (void)setSearchCompletionDelegate:(id)delegate;	// 0x30fc9ce5
// declared property setter: - (void)setSearchEnabled:(BOOL)enabled;	// 0x30fc9cc5
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x30f8f715
- (BOOL)shouldShowGroups;	// 0x30f91da1
- (BOOL)shouldShowIndex;	// 0x30fc96d5
- (BOOL)showCardForPerson:(void *)person withMemberCell:(id)memberCell animate:(BOOL)animate;	// 0x30f96db1
- (void)stopScrolling;	// 0x30fc9779
// declared property getter: - (id)styleProvider;	// 0x30f8f705
- (void)suspend;	// 0x30f95931
- (id)tableView;	// 0x30f914c9
- (id)tableViewPathToMember:(void *)member;	// 0x30fc9855
- (void)viewDidAppear:(BOOL)view;	// 0x30f92ea9
- (void)viewWillAppear:(BOOL)view;	// 0x30f92051
- (void)viewWillDisappear:(BOOL)view;	// 0x30f95ae1
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30fc9979
@end

