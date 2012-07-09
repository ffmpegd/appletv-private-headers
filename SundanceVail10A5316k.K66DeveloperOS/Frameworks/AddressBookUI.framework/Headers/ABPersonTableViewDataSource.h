/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSourcePrivate.h"
#import "ABPrimaryValueDelegate.h"
#import "ABPersonCellLayoutManagerDelegate.h"
#import <NSObject.h> // Unknown library

@class ABPersonCellLayoutManager, NSArray, UILabel, AccountsManager, ABMultiCellContentView, NSMutableArray, UIResponder, ABPersonTableFooterView, NSIndexPath, NSString, UIFont, UITableViewCell, NSMutableDictionary, UIView, ABPersonTableHeaderView, NSDictionary, ABLabelViewWithVariablePositioning, ABPersonTableView, ABNamePropertyGroup, ABPersonImageView, ABPersonTableViewActionsDelegate, ABActionsController, ABPersonTableViewMultiCellDelegate, ABPersonTableViewImageDataDelegate, ABPersonPickersDelegate, ABPersonTableViewLinkingDelegate, ABPersonTableViewSharingDelegate;
@protocol ABPersonTableViewDataSourceDelegate, ABStyleProvider;

@interface ABPersonTableViewDataSource : NSObject <UITableViewDelegate, UITableViewDataSourcePrivate, ABPrimaryValueDelegate, ABPersonCellLayoutManagerDelegate> {
	AccountsManager *_accountsManager;	// 4 = 0x4
	ABActionsController *_actionsController;	// 8 = 0x8
	CFArrayRef _optionalProperties;	// 12 = 0xc
	CFArrayRef _additionalProperties;	// 16 = 0x10
	CFDictionaryRef _multiCellContentViewsByCustomCell;	// 20 = 0x14
	ABPersonTableViewMultiCellDelegate *_multiCellContentViewDelegate;	// 24 = 0x18
	ABPersonTableViewImageDataDelegate *_imageDataDelegate;	// 28 = 0x1c
	ABPersonTableViewActionsDelegate *_actionsDelegate;	// 32 = 0x20
	ABPersonTableViewLinkingDelegate *_linkingDelegate;	// 36 = 0x24
	ABPersonPickersDelegate *_pickersDelegate;	// 40 = 0x28
	ABPersonTableViewSharingDelegate *_sharingDelegate;	// 44 = 0x2c
	BOOL _attemptDelayedBecomeFirstResponder;	// 48 = 0x30
	BOOL _isPinningLocked;	// 49 = 0x31
	NSMutableDictionary *_propertyGroupsStore;	// 52 = 0x34
	NSMutableDictionary *_unusedPropertyGroupsStore;	// 56 = 0x38
	NSMutableArray *_editablePropertyGroups;	// 60 = 0x3c
	NSMutableArray *_propertyGroups;	// 64 = 0x40
	CFSetRef _addNewValuePropertiesStore;	// 68 = 0x44
	CFSetRef _addNewValueProperties;	// 72 = 0x48
	ABNamePropertyGroup *_namePropertyGroup;	// 76 = 0x4c
	UILabel *_noValueLabel;	// 80 = 0x50
	BOOL _shouldShowNoValueLabelAsNoAccess;	// 84 = 0x54
	ABPersonTableHeaderView *_headerView;	// 88 = 0x58
	ABPersonTableFooterView *_footerView;	// 92 = 0x5c
	UIView *_customPersonTableHeaderView;	// 96 = 0x60
	UIView *_customPersonTableFooterView;	// 100 = 0x64
	UIView *_notesHeaderView;	// 104 = 0x68
	ABLabelViewWithVariablePositioning *_linkingHeaderView;	// 108 = 0x6c
	int _primaryProperty;	// 112 = 0x70
	UITableViewCell *_partiallySelectedCell;	// 116 = 0x74
	ABPersonCellLayoutManager *_cellLayoutManager;	// 120 = 0x78
	UIView *_tableHeaderViewContainer;	// 124 = 0x7c
	NSDictionary *_cachedKeyboardInfo;	// 128 = 0x80
	BOOL _isEditing;	// 132 = 0x84
	BOOL _isUnlinkingPerson;	// 133 = 0x85
	BOOL _badgeEmailPropertiesForMailVIP;	// 134 = 0x86
@private
	NSArray *_people;	// 136 = 0x88
	void *_addressBook;	// 140 = 0x8c
	id<ABPersonTableViewDataSourceDelegate> _delegate;	// 144 = 0x90
	ABPersonTableView *_tableView;	// 148 = 0x94
	BOOL _allowsActions;	// 152 = 0x98
	BOOL _allowsEditing;	// 153 = 0x99
	BOOL _allowsAddToFavorites;	// 154 = 0x9a
	BOOL _allowsSendingTextMessage;	// 155 = 0x9b
	BOOL _allowsSharing;	// 156 = 0x9c
	BOOL _allowsConferencing;	// 157 = 0x9d
	BOOL _allowsDeletion;	// 158 = 0x9e
	BOOL _allowsSounds;	// 159 = 0x9f
	BOOL _allowsVibrations;	// 160 = 0xa0
	BOOL _shouldShowContactSourcesStringAsMessage;	// 161 = 0xa1
	CFArrayRef _displayedProperties;	// 164 = 0xa4
	int _highlightedValueProperty;	// 168 = 0xa8
	int _highlightedValueIdentifier;	// 172 = 0xac
	BOOL _highlightedValueIsImportant;	// 176 = 0xb0
	int _insertionProperty;	// 180 = 0xb4
	id _insertionValue;	// 184 = 0xb8
	id _insertionLabel;	// 188 = 0xbc
	id<ABStyleProvider> _styleProvider;	// 192 = 0xc0
	NSIndexPath *_lastActiveMultiCellIndexPath;	// 196 = 0xc4
	ABMultiCellContentView *_lastActiveMultiCellContentView;	// 200 = 0xc8
	ABMultiCellContentView *_multiCellContentViewForWillEndEditing;	// 204 = 0xcc
	ABMultiCellContentView *_pinningMultiCellContentViewAlternate;	// 208 = 0xd0
	NSIndexPath *_pinningMultiCellIndexPath;	// 212 = 0xd4
	NSIndexPath *_pinningMultiCellRelativeIndexPath;	// 216 = 0xd8
	UIResponder *_pinningResponder;	// 220 = 0xdc
	BOOL _isSettingFirstResponder;	// 224 = 0xe0
	BOOL _isEndingEditingTransactions;	// 225 = 0xe1
	BOOL _viewControllerWillSlideOut;	// 226 = 0xe2
	int _customKeyboardOutDirection;	// 228 = 0xe4
	NSMutableArray *_additionalLabels;	// 232 = 0xe8
	BOOL _selectedPropertyForCellWithoutLabelDivider;	// 236 = 0xec
	BOOL _ignoreVibrationsDidChangeNotification;	// 237 = 0xed
}
@property(readonly, retain) AccountsManager *accountsManager;	// G=0x34c7d6d1; converted property
@property(readonly, retain) ABActionsController *actionsController;	// G=0x34caffd1; converted property
@property(readonly, assign, nonatomic) ABPersonTableViewActionsDelegate *actionsDelegate;	// G=0x34caf79d; 
@property(retain, nonatomic) NSMutableArray *additionalLabels;	// G=0x34cb41e9; S=0x34cb41f9; @synthesize=_additionalLabels
@property(readonly, assign) CFArrayRef additionalProperties;	// G=0x34c7a299; converted property
@property(assign, nonatomic) void *addressBook;	// G=0x34c65691; S=0x34c5c8c5; @synthesize=_addressBook
@property(assign, nonatomic) BOOL allowsActions;	// G=0x34c5f0d1; S=0x34c5dc71; @synthesize=_allowsActions
@property(assign, nonatomic) BOOL allowsAddToFavorites;	// G=0x34caffad; S=0x34cafe8d; @synthesize=_allowsAddToFavorites
@property(assign, nonatomic) BOOL allowsConferencing;	// G=0x34c6f111; S=0x34c5f135; @synthesize=_allowsConferencing
@property(assign, nonatomic) BOOL allowsDeletion;	// G=0x34c5f771; S=0x34c5f1c1; @synthesize=_allowsDeletion
@property(assign, nonatomic) BOOL allowsEditing;	// G=0x34c6b8ad; S=0x34c5dbb1; @synthesize=_allowsEditing
@property(assign, nonatomic) BOOL allowsSendingTextMessage;	// G=0x34cb4089; S=0x34caff11; @synthesize=_allowsSendingTextMessage
@property(assign, nonatomic) BOOL allowsSharing;	// G=0x34cb4099; S=0x34caff95; @synthesize=_allowsSharing
@property(assign, nonatomic) BOOL allowsSounds;	// G=0x34c85d91; S=0x34c5fe79; @synthesize=_allowsSounds
@property(assign, nonatomic) BOOL allowsVibrations;	// G=0x34c85da1; S=0x34c5feb9; @synthesize=_allowsVibrations
@property(copy, nonatomic) NSString *alternateName;	// G=0x34cb0cf9; S=0x34cb0d21; 
@property(readonly, assign, nonatomic) NSString *attribution;	// G=0x34cb1101; 
@property(readonly, assign, nonatomic, getter=isAttributionEnabled) BOOL attributionEnabled;	// G=0x34cb1121; 
@property(assign, nonatomic) BOOL badgeEmailPropertiesForMailVIP;	// G=0x34cb4269; S=0x34cb4279; @synthesize=_badgeEmailPropertiesForMailVIP
@property(readonly, assign, nonatomic) BOOL canSave;	// G=0x34c8273d; 
@property(readonly, retain) ABPersonCellLayoutManager *cellLayoutManager;	// G=0x34c6dc41; converted property
@property(assign, nonatomic) int customKeyboardOutDirection;	// G=0x34cb41d9; S=0x34c801f9; @synthesize=_customKeyboardOutDirection
@property(retain, nonatomic) UIView *customMessageView;	// G=0x34cb0f15; S=0x34cb0f3d; 
@property(retain, nonatomic) UIView *customPersonTableFooterView;	// G=0x34cb1071; S=0x34cb1081; 
@property(retain, nonatomic) UIView *customPersonTableHeaderView;	// G=0x34cb0c59; S=0x34cb0c69; 
@property(assign, nonatomic) id<ABPersonTableViewDataSourceDelegate> delegate;	// G=0x34c6a959; S=0x34c5c8f9; @synthesize=_delegate
@property(assign, nonatomic) CFArrayRef displayedProperties;	// G=0x34c5e391; S=0x34cb0021; @synthesize=_displayedProperties
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x34c5d60d; S=0x34cb1d59; 
@property(readonly, assign, nonatomic) BOOL hasChanges;	// G=0x34cb0141; 
@property(readonly, assign, nonatomic) BOOL hasImageChanges;	// G=0x34cb0335; 
@property(readonly, assign, nonatomic) BOOL hasNameChanges;	// G=0x34cb035d; 
@property(assign, nonatomic) int highlightedValueIdentifier;	// G=0x34cb40c9; S=0x34cb40d9; @synthesize=_highlightedValueIdentifier
@property(assign, nonatomic) BOOL highlightedValueIsImportant;	// G=0x34cb40e9; S=0x34cb40f9; @synthesize=_highlightedValueIsImportant
@property(assign, nonatomic) int highlightedValueProperty;	// G=0x34cb40a9; S=0x34cb40b9; @synthesize=_highlightedValueProperty
@property(assign, nonatomic) BOOL ignoreVibrationsDidChangeNotification;	// G=0x34cb4229; S=0x34cb4239; @synthesize=_ignoreVibrationsDidChangeNotification
@property(readonly, assign, nonatomic) ABPersonTableViewImageDataDelegate *imageDataDelegate;	// G=0x34caf6ad; 
@property(readonly, assign, nonatomic) id insertionLabel;	// G=0x34cb4129; @synthesize=_insertionLabel
@property(readonly, assign, nonatomic) int insertionProperty;	// G=0x34cb4109; @synthesize=_insertionProperty
@property(readonly, assign, nonatomic) id insertionValue;	// G=0x34cb4119; @synthesize=_insertionValue
@property(readonly, assign, nonatomic) BOOL isEndingEditingTransactions;	// G=0x34cb41c9; @synthesize=_isEndingEditingTransactions
@property(readonly, assign, nonatomic) BOOL isPinning;	// G=0x34c6c899; 
@property(assign, nonatomic) BOOL isSettingFirstResponder;	// G=0x34cb41a9; S=0x34cb41b9; @synthesize=_isSettingFirstResponder
@property(retain, nonatomic) ABMultiCellContentView *lastActiveMultiCellContentView;	// G=0x34cb4149; S=0x34c60e05; @synthesize=_lastActiveMultiCellContentView
@property(retain, nonatomic) NSIndexPath *lastActiveMultiCellIndexPath;	// G=0x34cb4139; S=0x34c60f39; @synthesize=_lastActiveMultiCellIndexPath
@property(readonly, assign, nonatomic) ABPersonTableViewLinkingDelegate *linkingDelegate;	// G=0x34caf891; 
@property(copy, nonatomic) NSString *message;	// G=0x34cb0d65; S=0x34cb0d8d; 
@property(copy, nonatomic) NSString *messageDetail;	// G=0x34cb0e3d; S=0x34cb0e65; 
@property(retain, nonatomic) UIFont *messageDetailFont;	// G=0x34cb0ea9; S=0x34cb0ed1; 
@property(retain, nonatomic) UIFont *messageFont;	// G=0x34cb0dd1; S=0x34cb0df9; 
@property(readonly, assign, nonatomic) ABPersonTableViewMultiCellDelegate *multiCellContentViewDelegate;	// G=0x34caf5f1; 
@property(retain, nonatomic) ABMultiCellContentView *multiCellContentViewForWillEndEditing;	// G=0x34cb4159; S=0x34c60f91; @synthesize=_multiCellContentViewForWillEndEditing
@property(readonly, retain) ABNamePropertyGroup *namePropertyGroup;	// G=0x34c64441; converted property
@property(readonly, retain) UILabel *noValueLabel;	// G=0x34c6bc41; converted property
@property(retain, nonatomic) UITableViewCell *partiallySelectedCell;	// G=0x34c888e9; S=0x34c87ec1; @synthesize=_partiallySelectedCell
@property(retain, nonatomic) NSArray *people;	// G=0x34c5d559; S=0x34c60429; @synthesize=_people
@property(retain, nonatomic) UIView *personHeaderView;	// G=0x34cb0f81; S=0x34cb0fa9; 
@property(readonly, assign, nonatomic) ABPersonImageView *personImageView;	// G=0x34cb1d6d; 
@property(readonly, assign, nonatomic) ABPersonPickersDelegate *pickersDelegate;	// G=0x34caf711; 
@property(retain, nonatomic) ABMultiCellContentView *pinningMultiCellContentViewAlternate;	// G=0x34cb4169; S=0x34c61079; @synthesize=_pinningMultiCellContentViewAlternate
@property(retain, nonatomic) NSIndexPath *pinningMultiCellIndexPath;	// G=0x34cb4179; S=0x34c61089; @synthesize=_pinningMultiCellIndexPath
@property(retain, nonatomic) NSIndexPath *pinningMultiCellRelativeIndexPath;	// G=0x34cb4189; S=0x34c61099; @synthesize=_pinningMultiCellRelativeIndexPath
@property(retain, nonatomic) UIResponder *pinningResponder;	// G=0x34cb4199; S=0x34c61069; @synthesize=_pinningResponder
@property(readonly, assign, nonatomic) int primaryProperty;	// G=0x34cb0039; 
@property(assign, nonatomic) BOOL selectedPropertyForCellWithoutLabelDivider;	// G=0x34cb4209; S=0x34cb4219; @synthesize=_selectedPropertyForCellWithoutLabelDivider
@property(readonly, assign, nonatomic) ABPersonTableViewSharingDelegate *sharingDelegate;	// G=0x34caf929; 
@property(assign, nonatomic) BOOL shouldAlignPersonHeaderViewToImage;	// G=0x34cb0fed; S=0x34cb1015; 
@property(assign, nonatomic) BOOL shouldShowContactSourcesStringAsMessage;	// G=0x34c66481; S=0x34c6002d; @synthesize=_shouldShowContactSourcesStringAsMessage
@property(assign, nonatomic) BOOL shouldShowNoValueLabelAsNoAccess;	// G=0x34cb4249; S=0x34cb4259; @synthesize=_shouldShowNoValueLabelAsNoAccess
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x34c5cac1; S=0x34c5c925; @synthesize=_styleProvider
@property(readonly, assign, nonatomic) ABPersonTableFooterView *tableFooterView;	// G=0x34cb105d; 
@property(readonly, assign, nonatomic) ABPersonTableHeaderView *tableHeaderView;	// G=0x34c5ca79; 
@property(readonly, retain) UIView *tableHeaderViewContainer;	// G=0x34cb3f71; converted property
@property(retain, nonatomic) ABPersonTableView *tableView;	// G=0x34cb4079; S=0x34c6aac1; @synthesize=_tableView
@property(assign, nonatomic) BOOL viewControllerWillSlideOut;	// G=0x34c6cf41; S=0x34c801e9; @synthesize=_viewControllerWillSlideOut
- (id)init;	// 0x34c5c341
- (void)_conferenceHistoryChanged:(id)changed;	// 0x34cafbfd
- (id)_contactSourcesString;	// 0x34cafac5
- (void)_endTableViewUpdatesWithoutScroll;	// 0x34c89c19
- (void)_enumerateContextPointersForProperty:(int)property usingBlock:(id)block;	// 0x34c61351
- (id)_footerView;	// 0x34c5f209
- (void)_getDataProvider:(id *)provider andInfo:(id *)info forIndexPath:(id)indexPath;	// 0x34c6eb65
- (void)_getFirstRows:(id *)rows andOtherRows:(id *)rows2 fromIndexPaths:(id)indexPaths;	// 0x34c7ab1d
- (void)_getPropertyGroup:(id *)group index:(int *)index editableFlag:(BOOL *)flag atIndexPath:(id)indexPath;	// 0x34c6ec29
- (void)_handleUserGeneratedVibrationsDidChangeNotification;	// 0x34cb32e5
- (id)_indexPathForHeaderViewRow:(unsigned)headerViewRow;	// 0x34c8834d
- (id)_indexPathForPropertyGroup:(id)propertyGroup index:(int)index editableFlag:(BOOL)flag;	// 0x34c89ad9
- (BOOL)_isReadonlyAtIndexPath:(id)indexPath;	// 0x34c7c7a1
- (void)_keyboardWillHide:(id)_keyboard;	// 0x34c842bd
- (void)_keyboardWillShow:(id)_keyboard;	// 0x34c854c9
- (id)_linkingHeaderView;	// 0x34c8449d
- (id)_multiCellContentViewForCustomPropertyCell:(id)customPropertyCell;	// 0x34cb30e1
- (id)_notesHeaderView;	// 0x34cb22c5
- (void)_performVibrationRelatedChangesReloadingFromModel:(BOOL)model updatingDataUsingBlock:(id)block;	// 0x34cb3345
- (void)_registerForKeyboardNotifications;	// 0x34c5c6b1
- (void)_registerForVibrationsChangedNotifications;	// 0x34c5c7e9
- (void)_resetAddNewValueCells;	// 0x34c795fd
- (int)_sectionIndexForPropertyGroup:(id)propertyGroup orProperty:(int)property propertyGroupContext:(void *)context withPropertyGroups:(id)propertyGroups whenEditing:(BOOL)editing;	// 0x34c7a689
- (void)_setMultiCellContentView:(id)view forCustomPropertyCell:(id)customPropertyCell;	// 0x34cb3091
- (void)_unregisterForKeyboardNotifications;	// 0x34c89a59
- (void)_unregisterForVibrationsChangedNotifications;	// 0x34c810d1
- (void)_updateBackgroundForCell:(id)cell atIndexPath:(id)indexPath;	// 0x34c74659
- (void)_updateCellsForDataProvider:(id)dataProvider afterDeleteAtIndex:(int)index isInsertionIndex:(BOOL)index3 inTableView:(id)tableView;	// 0x34c8c6b9
- (void)_updateDeleteButtonIfNeededForFooterView:(id)footerView;	// 0x34c5f575
- (void)_updateTableForVibrationChanges;	// 0x34cb3325
// converted property getter: - (id)accountsManager;	// 0x34c7d6d1
- (id)actionCellForTableView:(id)tableView withReuseIdentifier:(id)reuseIdentifier isConference:(BOOL)conference hasCustomContent:(BOOL)content;	// 0x34cb2add
// converted property getter: - (id)actionsController;	// 0x34caffd1
// declared property getter: - (id)actionsDelegate;	// 0x34caf79d
- (void)addFieldCellSelected:(id)selected;	// 0x34c8c9b1
- (void)addFieldCellWillSelect:(id)addFieldCell;	// 0x34cb20b1
- (void)addToContactsButtonClicked:(id)contactsButtonClicked;	// 0x34cb21c9
- (id)addValueCellForTableView:(id)tableView withReuseIdentifier:(id)reuseIdentifier;	// 0x34c7c939
// declared property getter: - (id)additionalLabels;	// 0x34cb41e9
// converted property getter: - (CFArrayRef)additionalProperties;	// 0x34c7a299
// declared property getter: - (void *)addressBook;	// 0x34c65691
- (void)adjustTableViewForKeyboardInfo:(id)keyboardInfo animated:(BOOL)animated;	// 0x34c6cbad
// declared property getter: - (BOOL)allowsActions;	// 0x34c5f0d1
// declared property getter: - (BOOL)allowsAddToFavorites;	// 0x34caffad
// declared property getter: - (BOOL)allowsConferencing;	// 0x34c6f111
// declared property getter: - (BOOL)allowsDeletion;	// 0x34c5f771
// declared property getter: - (BOOL)allowsEditing;	// 0x34c6b8ad
- (BOOL)allowsFaceTimeFavorite;	// 0x34c65855
// declared property getter: - (BOOL)allowsSendingTextMessage;	// 0x34cb4089
// declared property getter: - (BOOL)allowsSharing;	// 0x34cb4099
// declared property getter: - (BOOL)allowsSounds;	// 0x34c85d91
// declared property getter: - (BOOL)allowsVibrations;	// 0x34c85da1
- (BOOL)allowsVoiceFavorite;	// 0x34c657cd
// declared property getter: - (id)alternateName;	// 0x34cb0cf9
// declared property getter: - (id)attribution;	// 0x34cb1101
// declared property getter: - (BOOL)badgeEmailPropertiesForMailVIP;	// 0x34cb4269
- (void)beginPinning;	// 0x34c88199
// declared property getter: - (BOOL)canSave;	// 0x34c8273d
- (BOOL)canSelectLabelForPropertyGroup:(id)propertyGroup info:(id)info;	// 0x34c7af65
- (void)cancelPinning;	// 0x34c60fa5
// converted property getter: - (id)cellLayoutManager;	// 0x34c6dc41
- (id)controllerMainView;	// 0x34cafc39
// declared property getter: - (int)customKeyboardOutDirection;	// 0x34cb41d9
// declared property getter: - (id)customMessageView;	// 0x34cb0f15
// declared property getter: - (id)customPersonTableFooterView;	// 0x34cb1071
// declared property getter: - (id)customPersonTableHeaderView;	// 0x34cb0c59
- (void)dealloc;	// 0x34c80a1d
// declared property getter: - (id)delegate;	// 0x34c6a959
- (void)deleteButtonClicked:(id)clicked;	// 0x34c912dd
// declared property getter: - (CFArrayRef)displayedProperties;	// 0x34c5e391
- (id)displayedPropertyGroupForProperty:(int)property context:(void *)context whenEditing:(BOOL)editing;	// 0x34cb253d
- (int)editingSectionForNonEditingSection:(int)nonEditingSection;	// 0x34cb3ff9
- (void)endEditingTransactions;	// 0x34c60dd5
- (void)endPinning;	// 0x34c6c561
// declared property getter: - (BOOL)hasChanges;	// 0x34cb0141
// declared property getter: - (BOOL)hasImageChanges;	// 0x34cb0335
// declared property getter: - (BOOL)hasNameChanges;	// 0x34cb035d
- (void)headerFooterAnimationDidStop:(id)headerFooterAnimation finished:(id)finished context:(void *)context;	// 0x34cb1d0d
- (float)heightForFooterInTableView:(id)tableView;	// 0x34c70ce1
- (float)heightForHeaderInTableView:(id)tableView;	// 0x34c6f511
// declared property getter: - (int)highlightedValueIdentifier;	// 0x34cb40c9
// declared property getter: - (BOOL)highlightedValueIsImportant;	// 0x34cb40e9
// declared property getter: - (int)highlightedValueProperty;	// 0x34cb40a9
- (id)ieTableViewCellForPropertyGroup:(id)propertyGroup tableView:(id)view indexPath:(id)path editing:(BOOL)editing allowDequeing:(BOOL)dequeing tag:(int *)tag;	// 0x34c713dd
// declared property getter: - (BOOL)ignoreVibrationsDidChangeNotification;	// 0x34cb4229
// declared property getter: - (id)imageDataDelegate;	// 0x34caf6ad
- (void)indexOfFirstPropertyGroupSection:(int *)firstPropertyGroupSection lastPropertyGroupSection:(int *)section addFieldSection:(int *)section3 linkingUISection:(int *)section4 primaryPropertyActionsSection:(int *)section5 topGroupingActionSection:(int *)section6 bottomGroupingActionSection:(int *)section7 cardActionsSection:(int *)section8 cardActionsSectionCount:(int *)count totalSectionCount:(int *)count10 whenEditing:(BOOL)editing;	// 0x34c5dcb9
- (int)indexOfLinkingUISectionWhenEditing:(BOOL)linkingUISectionWhenEditing;	// 0x34c6d499
// declared property getter: - (id)insertionLabel;	// 0x34cb4129
// declared property getter: - (int)insertionProperty;	// 0x34cb4109
// declared property getter: - (id)insertionValue;	// 0x34cb4119
- (void)invalidateAdditionalProperties;	// 0x34c610ad
- (void)invalidateAllPropertyGroups;	// 0x34c60511
- (void)invalidatePropertyGroupsForEditing:(BOOL)editing;	// 0x34c6053d
// declared property getter: - (BOOL)isAttributionEnabled;	// 0x34cb1121
// declared property getter: - (BOOL)isEditing;	// 0x34c5d60d
// declared property getter: - (BOOL)isEndingEditingTransactions;	// 0x34cb41c9
- (BOOL)isInFullEditingMode;	// 0x34c5d625
- (BOOL)isMe;	// 0x34c662e9
// declared property getter: - (BOOL)isPinning;	// 0x34c6c899
- (BOOL)isPropertyDisplayed:(int)displayed;	// 0x34c5e325
- (BOOL)isPropertyOptional:(int)optional;	// 0x34c7a111
// declared property getter: - (BOOL)isSettingFirstResponder;	// 0x34cb41a9
- (BOOL)isUnlinkingPersonWithAnimation;	// 0x34c7d725
// declared property getter: - (id)lastActiveMultiCellContentView;	// 0x34cb4149
// declared property getter: - (id)lastActiveMultiCellIndexPath;	// 0x34cb4139
- (id)linkedCardCellForTableView:(id)tableView withReuseIdentifier:(id)reuseIdentifier;	// 0x34c850ad
// declared property getter: - (id)linkingDelegate;	// 0x34caf891
- (float)marginForTableView:(id)tableView;	// 0x34c78b0d
// declared property getter: - (id)message;	// 0x34cb0d65
// declared property getter: - (id)messageDetail;	// 0x34cb0e3d
// declared property getter: - (id)messageDetailFont;	// 0x34cb0ea9
// declared property getter: - (id)messageFont;	// 0x34cb0dd1
// declared property getter: - (id)multiCellContentViewDelegate;	// 0x34caf5f1
// declared property getter: - (id)multiCellContentViewForWillEndEditing;	// 0x34cb4159
// converted property getter: - (id)namePropertyGroup;	// 0x34c64441
- (id)namePropertyGroup:(id)group primaryValueForProperty:(int)property;	// 0x34cb3fa5
- (id)newAccessoryViewWhenEditing:(BOOL)editing forDataProvider:(id)dataProvider info:(id)info;	// 0x34cb2ee5
- (CFArrayRef)newAdditionalProperties;	// 0x34c7a2cd
- (id)newHeaderView;	// 0x34cb09b1
- (id)newPropertyGroupsForEditing:(BOOL)editing;	// 0x34c66101
- (id)newPropertyGroupsForEditing:(BOOL)editing withDisplayedProperties:(CFArrayRef)displayedProperties;	// 0x34c66125
// converted property getter: - (id)noValueLabel;	// 0x34c6bc41
- (void)notifyDataWasReloaded;	// 0x34c6a929
- (void)notifyHeaderViewHeightDidChange;	// 0x34cb0c39
- (int)numberOfRowsInSection:(int)section whenEditing:(BOOL)editing;	// 0x34c6d50d
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x34c6d04d
- (int)numberOfSectionsWhenEditing:(BOOL)sectionsWhenEditing;	// 0x34c6d07d
// declared property getter: - (id)partiallySelectedCell;	// 0x34c888e9
// declared property getter: - (id)people;	// 0x34c5d559
- (BOOL)personCellLayoutManager:(id)manager isCellInFullEditMode:(id)fullEditMode;	// 0x34c8c06d
// declared property getter: - (id)personHeaderView;	// 0x34cb0f81
// declared property getter: - (id)personImageView;	// 0x34cb1d6d
// declared property getter: - (id)pickersDelegate;	// 0x34caf711
// declared property getter: - (id)pinningMultiCellContentViewAlternate;	// 0x34cb4169
// declared property getter: - (id)pinningMultiCellIndexPath;	// 0x34cb4179
// declared property getter: - (id)pinningMultiCellRelativeIndexPath;	// 0x34cb4189
// declared property getter: - (id)pinningResponder;	// 0x34cb4199
- (void *)policyForPerson:(void *)person;	// 0x34c8cd05
- (id)prepareForLinkingUIUpdate;	// 0x34cafc59
- (void)prepareView;	// 0x34c6ac25
- (void)presentRelatedNamesPicker:(id)picker;	// 0x34cb21e9
// declared property getter: - (int)primaryProperty;	// 0x34cb0039
- (id)primarySourceNameForPerson:(void *)person;	// 0x34cafa21
- (void)propertyGroup:(id *)group orActions:(id *)actions forSection:(int)section whenEditing:(BOOL)editing;	// 0x34c6d1f9
- (id)propertyGroupForProperty:(int)property context:(void *)context;	// 0x34c5e3a1
- (id)propertyGroupForProperty:(int)property context:(void *)context createIfEmpty:(BOOL)empty;	// 0x34c5e3c9
- (id)propertyGroupsForEditing:(BOOL)editing;	// 0x34c5e221
- (id)realHeaderView;	// 0x34cb3f81
- (void)reloadConferencing;	// 0x34c83f4d
- (void)reloadData;	// 0x34c7d785
- (void)reloadDataIncludingHeaderView:(BOOL)view;	// 0x34c60af9
- (void)reloadDataIncludingHeaderView:(BOOL)view invalidatePropertyData:(BOOL)data;	// 0x34c60b11
- (void)reloadDeleteButton;	// 0x34cb03e9
- (void)reloadFavoritesData;	// 0x34cb063d
- (void)reloadImageData;	// 0x34cb0409
- (void)reloadNameData;	// 0x34cb0381
- (void)reloadNoValueLabelAnimated:(BOOL)animated;	// 0x34c65df1
- (void)reloadPreferredPersonForName;	// 0x34cb03a1
- (void)reloadPropertyGroups;	// 0x34cb0431
- (void)resetPropertyGroupStores;	// 0x34c610d1
- (int)rowIndexInPropertyGroup:(id *)propertyGroup orActions:(id *)actions forRow:(int)row inSection:(int)section whenEditing:(BOOL)editing;	// 0x34caf9a1
- (void)scrollToLastActiveEntryFieldAnimated:(BOOL)lastActiveEntryFieldAnimated;	// 0x34c6a59d
- (void)scrollToLastActiveEntryFieldAnimated:(BOOL)lastActiveEntryFieldAnimated becomeFirstResponder:(BOOL)responder;	// 0x34c6a5b1
- (void)scrollViewDidScroll:(id)scrollView;	// 0x34c7d10d
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x34c7d099
- (id)secondarySourceNameForPerson:(void *)person;	// 0x34cafa45
- (id)sectionAnimationsDictionaryForEditing:(BOOL)editing;	// 0x34c79645
- (id)sectionAnimationsDictionaryForOriginalPropertyGroups:(id)originalPropertyGroups newPropertyGroups:(id)groups whenEditing:(BOOL)editing;	// 0x34cb176d
- (id)sectionAnimationsDictionaryForSwipeToDeleteAtIndexPath:(id)indexPath;	// 0x34cb11c5
- (int)sectionIndexForProperty:(int)property propertyGroupContext:(void *)context withPropertyGroups:(id)propertyGroups whenEditing:(BOOL)editing;	// 0x34cb1199
- (int)sectionIndexForPropertyGroup:(id)propertyGroup withPropertyGroups:(id)propertyGroups whenEditing:(BOOL)editing;	// 0x34c7a659
- (void)selectCustomPartWithFrame:(CGRect)frame occupiedCorners:(unsigned)corners forCell:(id)cell;	// 0x34cb2a75
- (void)selectLabelPartForCell:(id)cell;	// 0x34cb29e9
- (void)selectValuePartForCell:(id)cell;	// 0x34cb2a2d
- (void)selectWholePartForCell:(id)cell;	// 0x34c87e79
// declared property getter: - (BOOL)selectedPropertyForCellWithoutLabelDivider;	// 0x34cb4209
// declared property setter: - (void)setAdditionalLabels:(id)labels;	// 0x34cb41f9
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x34c5c8c5
// declared property setter: - (void)setAllowsActions:(BOOL)actions;	// 0x34c5dc71
// declared property setter: - (void)setAllowsAddToFavorites:(BOOL)favorites;	// 0x34cafe8d
- (void)setAllowsAddToFavorites:(BOOL)favorites andReload:(BOOL)reload;	// 0x34cafe1d
// declared property setter: - (void)setAllowsConferencing:(BOOL)conferencing;	// 0x34c5f135
- (void)setAllowsConferencing:(BOOL)conferencing andReload:(BOOL)reload;	// 0x34c5f149
// declared property setter: - (void)setAllowsDeletion:(BOOL)deletion;	// 0x34c5f1c1
// declared property setter: - (void)setAllowsEditing:(BOOL)editing;	// 0x34c5dbb1
// declared property setter: - (void)setAllowsSendingTextMessage:(BOOL)message;	// 0x34caff11
- (void)setAllowsSendingTextMessage:(BOOL)message andReload:(BOOL)reload;	// 0x34cafea1
// declared property setter: - (void)setAllowsSharing:(BOOL)sharing;	// 0x34caff95
- (void)setAllowsSharing:(BOOL)sharing andReload:(BOOL)reload;	// 0x34caff25
// declared property setter: - (void)setAllowsSounds:(BOOL)sounds;	// 0x34c5fe79
// declared property setter: - (void)setAllowsVibrations:(BOOL)vibrations;	// 0x34c5feb9
// declared property setter: - (void)setAlternateName:(id)name;	// 0x34cb0d21
- (void)setAttribution:(id)attribution enabled:(BOOL)enabled target:(id)target action:(SEL)action;	// 0x34cb1145
// declared property setter: - (void)setBadgeEmailPropertiesForMailVIP:(BOOL)mailVIP;	// 0x34cb4279
// declared property setter: - (void)setCustomKeyboardOutDirection:(int)direction;	// 0x34c801f9
// declared property setter: - (void)setCustomMessageView:(id)view;	// 0x34cb0f3d
// declared property setter: - (void)setCustomPersonTableFooterView:(id)view;	// 0x34cb1081
// declared property setter: - (void)setCustomPersonTableHeaderView:(id)view;	// 0x34cb0c69
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34c5c8f9
// declared property setter: - (void)setDisplayedProperties:(CFArrayRef)properties;	// 0x34cb0021
- (void)setDisplayedProperties:(CFArrayRef)properties andRefreshUI:(BOOL)ui;	// 0x34c604a5
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x34cb1d59
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x34c6afb5
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier person:(void *)person important:(BOOL)important;	// 0x34cb1e15
// declared property setter: - (void)setHighlightedValueIdentifier:(int)identifier;	// 0x34cb40d9
// declared property setter: - (void)setHighlightedValueIsImportant:(BOOL)important;	// 0x34cb40f9
// declared property setter: - (void)setHighlightedValueProperty:(int)property;	// 0x34cb40b9
// declared property setter: - (void)setIgnoreVibrationsDidChangeNotification:(BOOL)changeNotification;	// 0x34cb4239
- (void)setInsertionLabel:(id)label;	// 0x34c60ab5
- (void)setInsertionProperty:(int)property value:(id)value label:(id)label;	// 0x34c605ed
- (void)setInsertionValue:(id)value;	// 0x34c60a71
// declared property setter: - (void)setIsSettingFirstResponder:(BOOL)responder;	// 0x34cb41b9
// declared property setter: - (void)setLastActiveMultiCellContentView:(id)view;	// 0x34c60e05
// declared property setter: - (void)setLastActiveMultiCellIndexPath:(id)path;	// 0x34c60f39
- (void)setLinkingDelegate:(id)delegate;	// 0x34caf829
// declared property setter: - (void)setMessage:(id)message;	// 0x34cb0d8d
// declared property setter: - (void)setMessageDetail:(id)detail;	// 0x34cb0e65
// declared property setter: - (void)setMessageDetailFont:(id)font;	// 0x34cb0ed1
// declared property setter: - (void)setMessageFont:(id)font;	// 0x34cb0df9
// declared property setter: - (void)setMultiCellContentViewForWillEndEditing:(id)endEditing;	// 0x34c60f91
// declared property setter: - (void)setPartiallySelectedCell:(id)cell;	// 0x34c87ec1
// declared property setter: - (void)setPeople:(id)people;	// 0x34c60429
// declared property setter: - (void)setPersonHeaderView:(id)view;	// 0x34cb0fa9
// declared property setter: - (void)setPinningMultiCellContentViewAlternate:(id)alternate;	// 0x34c61079
// declared property setter: - (void)setPinningMultiCellIndexPath:(id)path;	// 0x34c61089
// declared property setter: - (void)setPinningMultiCellRelativeIndexPath:(id)path;	// 0x34c61099
// declared property setter: - (void)setPinningResponder:(id)responder;	// 0x34c61069
- (void)setPrimaryProperty:(int)property countryCode:(id)code;	// 0x34cb0049
// declared property setter: - (void)setSelectedPropertyForCellWithoutLabelDivider:(BOOL)cellWithoutLabelDivider;	// 0x34cb4219
// declared property setter: - (void)setShouldAlignPersonHeaderViewToImage:(BOOL)alignPersonHeaderViewToImage;	// 0x34cb1015
// declared property setter: - (void)setShouldShowContactSourcesStringAsMessage:(BOOL)showContactSourcesStringAsMessage;	// 0x34c6002d
// declared property setter: - (void)setShouldShowNoValueLabelAsNoAccess:(BOOL)showNoValueLabelAsNoAccess;	// 0x34cb4259
- (void)setShouldUseAddNewValueCell:(BOOL)useAddNewValueCell forProperty:(int)property;	// 0x34c89a09
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x34c5c925
// declared property setter: - (void)setTableView:(id)view;	// 0x34c6aac1
// declared property setter: - (void)setViewControllerWillSlideOut:(BOOL)slideOut;	// 0x34c801e9
// declared property getter: - (id)sharingDelegate;	// 0x34caf929
// declared property getter: - (BOOL)shouldAlignPersonHeaderViewToImage;	// 0x34cb0fed
// declared property getter: - (BOOL)shouldShowContactSourcesStringAsMessage;	// 0x34c66481
// declared property getter: - (BOOL)shouldShowNoValueLabelAsNoAccess;	// 0x34cb4249
- (BOOL)shouldUseAddNewValueCellForProperty:(int)property;	// 0x34c6f5fd
- (void)showLinkedCardAtRow:(int)row;	// 0x34c85be1
- (void)sizeToFit;	// 0x34c85ee9
// declared property getter: - (id)styleProvider;	// 0x34c5cac1
- (void)swapAddNewValueCellForProperty:(int)property atIndexPath:(id)indexPath;	// 0x34c8982d
// declared property getter: - (id)tableFooterView;	// 0x34cb105d
// declared property getter: - (id)tableHeaderView;	// 0x34c5ca79
// converted property getter: - (id)tableHeaderViewContainer;	// 0x34cb3f71
// declared property getter: - (id)tableView;	// 0x34cb4079
- (BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;	// 0x34c743f5
- (BOOL)tableView:(id)view canPerformAction:(SEL)action forRowAtIndexPath:(id)indexPath withSender:(id)sender;	// 0x34cb39cd
- (void)tableView:(id)view cell:(id *)cell orTag:(int *)tag forRowAtIndexPath:(id)indexPath allowDequeing:(BOOL)dequeing;	// 0x34c70d8d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x34c70d31
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x34c88d61
- (void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;	// 0x34cb3e11
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x34c8579d
- (int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;	// 0x34c7c285
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x34c842f5
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x34c6d781
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x34c6d4d5
- (void)tableView:(id)view performAction:(SEL)action forRowAtIndexPath:(id)indexPath withSender:(id)sender;	// 0x34cb3b19
- (BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;	// 0x34c7c505
- (BOOL)tableView:(id)view shouldShowMenuForRowAtIndexPath:(id)indexPath;	// 0x34cb3939
- (id)tableView:(id)view titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;	// 0x34c8bd19
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x34c84eb9
- (BOOL)tableView:(id)view wantsHeaderForSection:(int)section;	// 0x34c6d111
- (void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;	// 0x34cb3c8d
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x34c74571
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x34c855f9
- (void)tableViewAddFieldUpdateAnimationsDidStop:(id)tableViewAddFieldUpdateAnimations finished:(id)finished context:(void *)context;	// 0x34c8e231
- (id)tableViewCellForActions:(id)actions tableView:(id)view row:(int)row editing:(BOOL)editing allowDequeing:(BOOL)dequeing tag:(int *)tag;	// 0x34cb3105
- (int)tableViewRowAnimationForUpdateAction:(unsigned)updateAction isFirstRow:(BOOL)row;	// 0x34c5f079
- (id)titleForNoValueWithProperty:(int)property;	// 0x34c6be69
- (void)unselectAllCellParts;	// 0x34c887bd
- (void)updateByAddingFieldForProperty:(int)property whenEditing:(BOOL)editing;	// 0x34c8dd01
- (void)updateCellEditingStyleAtIndexPath:(id)indexPath;	// 0x34c8abd5
- (void)updateContactSourcesStringIfNeeded;	// 0x34c66431
- (void)updateForConferencingAvailabilityChange;	// 0x34c83f29
- (void)updateHeadersAndFootersForEditing:(BOOL)editing animated:(BOOL)animated;	// 0x34c6ac5d
- (void)updateLinkingUI:(id)ui;	// 0x34cafca9
- (void)updateRecord;	// 0x34c8e8a5
- (void)updateSectionHeaderAndFooterHeightsForEditing:(BOOL)editing;	// 0x34c6ad85
- (void)updateTableFooterViewAnimated:(BOOL)animated;	// 0x34c6aead
- (void)updateTableHeaderViewAnimated:(BOOL)animated;	// 0x34c6a045
- (void)updateTableHeaderViewAnimated:(BOOL)animated andSkipTableViewHeaderHeightNotification:(BOOL)notification;	// 0x34c6a059
- (BOOL)usesAddNewValueCellForProperty:(int)property;	// 0x34c6f0f1
- (void)valueAtIndex:(int)index selectedForPropertyGroup:(id)propertyGroup withMemberCell:(id)memberCell forEditing:(BOOL)editing;	// 0x34cb1d95
// declared property getter: - (BOOL)viewControllerWillSlideOut;	// 0x34c6cf41
- (id)viewForFooterInTableView:(id)tableView;	// 0x34c7d37d
- (id)viewForHeaderInTableView:(id)tableView;	// 0x34c77d11
@end
