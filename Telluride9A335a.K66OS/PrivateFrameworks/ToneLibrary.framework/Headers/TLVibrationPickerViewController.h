/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <UITableViewController.h> // Unknown library
#import "TLVibrationPickerTableViewCellDelegate.h"
#import "TLVibrationRecorderViewControllerDelegate.h"

@class TLVibrationManager, NSIndexPath, NSTimer, NSArray, TLVibratorController, NSString;
@protocol TLVibrationPickerViewControllerDelegate;

@interface TLVibrationPickerViewController : UITableViewController <TLVibrationPickerTableViewCellDelegate, TLVibrationRecorderViewControllerDelegate> {
	unsigned _vibrationType;	// 172 = 0xac
	BOOL _showsDefault;	// 176 = 0xb0
	BOOL _showsUserGenerated;	// 177 = 0xb1
	BOOL _showsNone;	// 178 = 0xb2
	BOOL _showsNothingSelected;	// 179 = 0xb3
	BOOL _showsEditButtonAtRightSideOfCurrentNavigationController;	// 180 = 0xb4
	BOOL _allowsDeletingCurrentSystemVibration;	// 181 = 0xb5
	NSString *_noneString;	// 184 = 0xb8
	BOOL _useVerboseSectionTitles;	// 188 = 0xbc
	unsigned _numberOfPrecedingSections;	// 192 = 0xc0
	NSIndexPath *_selectedVibrationIndexPath;	// 196 = 0xc4
	BOOL _canEnterEditingMode;	// 200 = 0xc8
	BOOL _vibrating;	// 201 = 0xc9
	BOOL _viewHasAppearedAtLeastOnce;	// 202 = 0xca
	BOOL _isCallingParentViewController;	// 203 = 0xcb
	BOOL _swipeToDeleteMode;	// 204 = 0xcc
	BOOL _skipNextUserGeneratedVibrationsDidChangeNotification;	// 205 = 0xcd
	TLVibrationManager *_vibrationManager;	// 208 = 0xd0
	TLVibratorController *_vibratorController;	// 212 = 0xd4
	id<TLVibrationPickerViewControllerDelegate> _delegate;	// 216 = 0xd8
	NSTimer *_vibrationShouldStopTimer;	// 220 = 0xdc
	NSArray *_sortedVibrationIdentifiers;	// 224 = 0xe0
	NSArray *_sortedUserGeneratedVibrationIdentifiers;	// 228 = 0xe4
}
@property(assign, nonatomic, setter=_setNumberOfPrecedingSections:) unsigned _numberOfPrecedingSections;	// G=0x305a906d; S=0x305a907d; @synthesize
@property(readonly, assign, nonatomic) int _sectionForDefaultGroup;	// G=0x305a7281; 
@property(readonly, assign, nonatomic) int _sectionForNoneGroup;	// G=0x305a7375; 
@property(readonly, assign, nonatomic) int _sectionForSystemGroup;	// G=0x305a72cd; 
@property(readonly, assign, nonatomic) int _sectionForUserGeneratedGroup;	// G=0x305a7319; 
@property(retain, nonatomic, setter=_setSelectedVibrationIndexPath:) NSIndexPath *_selectedVibrationIndexPath;	// G=0x305a6119; S=0x305a614d; 
@property(readonly, assign, nonatomic) BOOL _showsOnlyEditableSections;	// G=0x305a61a9; 
@property(readonly, assign, nonatomic) NSArray *_sortedUserGeneratedVibrationIdentifiers;	// G=0x305a6731; 
@property(readonly, assign, nonatomic) NSArray *_sortedVibrationIdentifiers;	// G=0x305a66b5; 
@property(assign, nonatomic, setter=_setUseVerboseSectionTitles:) BOOL _useVerboseSectionTitles;	// G=0x305a908d; S=0x305a909d; @synthesize
@property(assign, nonatomic) BOOL allowsDeletingCurrentSystemVibration;	// G=0x305a904d; S=0x305a905d; @synthesize=_allowsDeletingCurrentSystemVibration
@property(retain, nonatomic, setter=setAVController:) id avController;	// G=0x305a5ba9; S=0x305a5bc9; 
@property(assign, nonatomic) BOOL canEnterEditingMode;	// G=0x305a5d8d; S=0x305a5db5; @synthesize=_canEnterEditingMode
@property(readonly, assign, nonatomic) float contentHeight;	// G=0x305a5e01; 
@property(assign, nonatomic) id<TLVibrationPickerViewControllerDelegate> delegate;	// G=0x305a8ffd; S=0x305a900d; @synthesize=_delegate
@property(retain, nonatomic) NSString *noneString;	// G=0x305a901d; S=0x305a5be9; @synthesize=_noneString
@property(retain, nonatomic) NSString *selectedVibrationIdentifier;	// G=0x305a5e55; S=0x305a5e99; 
@property(assign, nonatomic) BOOL showsEditButtonAtRightSideOfCurrentNavigationController;	// G=0x305a903d; S=0x305a5d5d; @synthesize=_showsEditButtonAtRightSideOfCurrentNavigationController
@property(assign, nonatomic) BOOL showsNothingSelected;	// G=0x305a902d; S=0x305a5ce1; @synthesize=_showsNothingSelected
- (id)initWithStyle:(int)style;	// 0x305a58bd
- (id)initWithVibrationType:(unsigned)vibrationType avController:(id)controller showsDefault:(BOOL)aDefault showsUserGenerated:(BOOL)generated showsNone:(BOOL)none;	// 0x305a58e5
- (id)_actualIndexPathFromNonEditingIndexPath:(id)nonEditingIndexPath;	// 0x305a6061
- (id)_adjustedNameForVibrationWithDesiredName:(id)desiredName vibrationIdentifier:(id)identifier;	// 0x305a6dc5
- (void)_handleError:(id)error;	// 0x305a727d
- (void)_handleUserGeneratedVibrationsDidChangeNotification;	// 0x305a711d
- (id)_identifierOfVibrationAtIndexPath:(id)indexPath;	// 0x305a6835
- (id)_indexPathForVibrationWithIdentifier:(id)identifier;	// 0x305a69e9
- (int)_nonAdjustedNumberOfSectionsInTableView:(id)tableView;	// 0x305a7855
- (id)_nonEditingIndexPathFromActualIndexPath:(id)actualIndexPath;	// 0x305a5fad
// declared property getter: - (unsigned)_numberOfPrecedingSections;	// 0x305a906d
- (void)_processSelectionOfVibrationWithIdentifier:(id)identifier;	// 0x305a6b91
// declared property getter: - (int)_sectionForDefaultGroup;	// 0x305a7281
// declared property getter: - (int)_sectionForNoneGroup;	// 0x305a7375
// declared property getter: - (int)_sectionForSystemGroup;	// 0x305a72cd
// declared property getter: - (int)_sectionForUserGeneratedGroup;	// 0x305a7319
// declared property getter: - (id)_selectedVibrationIndexPath;	// 0x305a6119
// declared property setter: - (void)_setNumberOfPrecedingSections:(unsigned)precedingSections;	// 0x305a907d
- (void)_setSelectedVibrationIdentifier:(id)identifier processSelectionOfVibrationIdentifier:(BOOL)vibrationIdentifier;	// 0x305a5ead
// declared property setter: - (void)_setSelectedVibrationIndexPath:(id)path;	// 0x305a614d
// declared property setter: - (void)_setUseVerboseSectionTitles:(BOOL)titles;	// 0x305a909d
// declared property getter: - (BOOL)_showsOnlyEditableSections;	// 0x305a61a9
- (id)_sortedArrayWithVibrationIdentifiers:(id)vibrationIdentifiers allowsDuplicateVibrationNames:(BOOL)names;	// 0x305a6389
// declared property getter: - (id)_sortedUserGeneratedVibrationIdentifiers;	// 0x305a6731
// declared property getter: - (id)_sortedVibrationIdentifiers;	// 0x305a66b5
- (void)_startVibratingWithVibrationIdentifier:(id)vibrationIdentifier;	// 0x305a8501
- (void)_updateEditButtonItem;	// 0x305a6be5
- (void)_updateEditButtonItemWithAnimation:(BOOL)animation;	// 0x305a6c31
- (void)_updateSelectionStyleForCell:(id)cell indexPath:(id)path;	// 0x305a6cd1
// declared property getter: - (BOOL)_useVerboseSectionTitles;	// 0x305a908d
// declared property getter: - (BOOL)allowsDeletingCurrentSystemVibration;	// 0x305a904d
// declared property getter: - (id)avController;	// 0x305a5ba9
// declared property getter: - (BOOL)canEnterEditingMode;	// 0x305a5d8d
// declared property getter: - (float)contentHeight;	// 0x305a5e01
- (void)dealloc;	// 0x305a5acd
// declared property getter: - (id)delegate;	// 0x305a8ffd
- (void)finishedWithPicker;	// 0x305a89f9
// declared property getter: - (id)noneString;	// 0x305a901d
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x305a78cd
// declared property getter: - (id)selectedVibrationIdentifier;	// 0x305a5e55
// declared property setter: - (void)setAVController:(id)controller;	// 0x305a5bc9
// declared property setter: - (void)setAllowsDeletingCurrentSystemVibration:(BOOL)vibration;	// 0x305a905d
// declared property setter: - (void)setCanEnterEditingMode:(BOOL)mode;	// 0x305a5db5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x305a900d
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x305a8a35
// declared property setter: - (void)setNoneString:(id)string;	// 0x305a5be9
// declared property setter: - (void)setSelectedVibrationIdentifier:(id)identifier;	// 0x305a5e99
// declared property setter: - (void)setShowsEditButtonAtRightSideOfCurrentNavigationController:(BOOL)currentNavigationController;	// 0x305a5d5d
// declared property setter: - (void)setShowsNothingSelected:(BOOL)selected;	// 0x305a5ce1
// declared property getter: - (BOOL)showsEditButtonAtRightSideOfCurrentNavigationController;	// 0x305a903d
// declared property getter: - (BOOL)showsNothingSelected;	// 0x305a902d
- (void)stopVibrating;	// 0x305a8705
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x305a73e1
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x305a79ad
- (void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;	// 0x305a8215
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x305a7d7d
- (int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;	// 0x305a8109
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x305a78f5
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x305a7bdd
- (void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;	// 0x305a81f1
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x305a7ced
- (void)vibrationPickerTableViewCell:(id)cell endedEditingWithText:(id)text;	// 0x305a8771
- (void)vibrationRecorderViewController:(id)controller didFinishRecordingVibrationPattern:(id)pattern name:(id)name;	// 0x305a8245
- (void)viewDidAppear:(BOOL)view;	// 0x305a62b9
- (void)viewWillAppear:(BOOL)view;	// 0x305a61dd
- (void)viewWillDisappear:(BOOL)view;	// 0x305a62fd
@end

