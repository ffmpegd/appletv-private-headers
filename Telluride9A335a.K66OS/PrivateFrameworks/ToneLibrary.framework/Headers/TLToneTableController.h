/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "TLVibrationPickerViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "ToneLibrary-Structs.h"
#import "UITableViewDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSIndexPath, UITableView, TLVibrationPickerViewController, NSString, TLToneManager;

@interface TLToneTableController : NSObject <TLVibrationPickerViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
@private
	id _delegate;	// 4 = 0x4
	NSMutableArray *_ringtoneGroupLists;	// 8 = 0x8
	NSMutableArray *_ringtoneGroupNames;	// 12 = 0xc
	NSIndexPath *_selectedRingtoneIndexPath;	// 16 = 0x10
	BOOL _showsNone;	// 20 = 0x14
	BOOL _showsDefault;	// 21 = 0x15
	NSString *_noneString;	// 24 = 0x18
	NSString *_noneIdentifier;	// 28 = 0x1c
	NSString *_defaultIdentifier;	// 32 = 0x20
	BOOL _showsNothingSelected;	// 36 = 0x24
	BOOL _showsRingtonesStore;	// 37 = 0x25
	BOOL _noneAtTop;	// 38 = 0x26
	UITableView *_tableView;	// 40 = 0x28
	BOOL _showsVibrations;	// 44 = 0x2c
	BOOL _showsVibrationsAlongsideTones;	// 45 = 0x2d
	BOOL _showsDefaultVibration;	// 46 = 0x2e
	BOOL _showsUserGeneratedVibrations;	// 47 = 0x2f
	BOOL _showsNoneVibration;	// 48 = 0x30
	BOOL _showsNoVibrationSelected;	// 49 = 0x31
	NSString *_selectedVibrationIdentifier;	// 52 = 0x34
	TLVibrationPickerViewController *_vibrationPickerViewController;	// 56 = 0x38
	TLToneManager *_ringtoneManager;	// 60 = 0x3c
	id _avController;	// 64 = 0x40
	BOOL _startedInteruption;	// 68 = 0x44
	BOOL _customAVController;	// 69 = 0x45
	BOOL _tonePicker;	// 70 = 0x46
	unsigned _filter;	// 72 = 0x48
	unsigned _systemRingtoneStartIndex;	// 76 = 0x4c
}
@property(readonly, retain) id avController;	// G=0x3059c7d9; converted property
@property(retain, nonatomic, setter=setDefaultIdentifier:) id defaultIdentifier;	// G=0x3059cfb5; S=0x3059cfc5; @synthesize=_defaultIdentifier
@property(readonly, retain) TLToneManager *ringtoneManager;	// G=0x3059a6f1; converted property
@property(retain) id selectedRingtoneIdentifier;	// G=0x3059a6d1; S=0x3059a539; converted property
@property(retain) NSString *selectedVibrationIdentifier;	// G=0x3059aced; S=0x3059adb1; converted property
- (id)init;	// 0x30598c45
- (id)initWithAVController:(id)avcontroller;	// 0x30598c59
- (id)initWithAVController:(id)avcontroller filter:(unsigned)filter tonePicker:(BOOL)picker;	// 0x30598c79
- (void)_setRingtoneManager:(id)manager;	// 0x3059cf75
- (void)_setSelectedVibrationIdentifierTableViewUpdateDidComplete:(id)_setSelectedVibrationIdentifierTableViewUpdate;	// 0x3059acfd
- (BOOL)_showsDefaultVibration;	// 0x3059b235
- (BOOL)_showsNoneVibration;	// 0x3059b255
- (BOOL)_showsUserGeneratedVibrations;	// 0x3059b245
- (BOOL)_showsVibrations;	// 0x3059b181
- (BOOL)_showsVibrationsSwitchIsOn;	// 0x3059b1d1
- (void)_stopPlayingButKeepVibrating:(BOOL)vibrating;	// 0x3059cd91
- (void)_stopPlayingWithFadeOut:(BOOL)fadeOut shouldKeepVibrating:(BOOL)vibrating;	// 0x3059cc51
- (void)_switchValueDidChange:(id)_switchValue;	// 0x3059ceb9
- (id)_vibrationPickerViewController;	// 0x3059b281
- (void)addRingtonesInDirectory:(id)directory toArray:(id)array fileExtension:(id)extension;	// 0x30598fe1
// converted property getter: - (id)avController;	// 0x3059c7d9
- (int)compareRingtoneWithIdentifier:(id)identifier toRingtoneWithIdentifier:(id)identifier2;	// 0x30599111
- (id)copyCurrentPhoneRingtoneIdentifier;	// 0x3059b4d5
- (id)copyCurrentPhoneRingtoneName;	// 0x3059b4b5
- (id)copyCurrentPhoneTextToneIdentifier;	// 0x3059b515
- (id)copyCurrentPhoneTextToneName;	// 0x3059b4f5
- (void)dealloc;	// 0x30598e69
// declared property getter: - (id)defaultIdentifier;	// 0x3059cfb5
- (void)finishedWithPicker;	// 0x3059cdb9
- (id)identifierOfRingtoneAtIndexPath:(id)indexPath;	// 0x305994bd
- (id)indexPathForDefaultGroup;	// 0x30599751
- (id)indexPathForFirstRingtoneGroup;	// 0x305997d1
- (id)indexPathForNoneGroup;	// 0x3059987d
- (id)indexPathForRingtoneWithIdentifier:(id)identifier;	// 0x30599619
- (id)indexPathForRingtonesStoreGroup;	// 0x30599715
- (id)indexPathForSelectedRingtone;	// 0x305999d1
- (id)indexPathForVibrationGroup;	// 0x3059991d
- (BOOL)isDefaultGroupAtIndexPath:(id)indexPath;	// 0x305991e5
- (BOOL)isDividerAtIndexPath:(id)indexPath;	// 0x3059948d
- (BOOL)isNoneGroupAtIndexPath:(id)indexPath;	// 0x30599279
- (BOOL)isOtherVibrationGroupWithSection:(int)section;	// 0x30599411
- (BOOL)isRingtonesStoreGroupAtIndexPath:(id)indexPath;	// 0x30599195
- (BOOL)isVibrationGroupAtIndexPath:(id)indexPath;	// 0x3059933d
- (id)loadTextTonesFromPlist;	// 0x305999e1
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x3059bc95
- (void)playRingtoneWithIdentifier:(id)identifier;	// 0x3059c9c5
- (void)processNewRingtoneSelected:(id)selected;	// 0x3059b43d
- (void)reloadRingtones;	// 0x30599bb5
// converted property getter: - (id)ringtoneManager;	// 0x3059a6f1
// converted property getter: - (id)selectedRingtoneIdentifier;	// 0x3059a6d1
// converted property getter: - (id)selectedVibrationIdentifier;	// 0x3059aced
- (void)setAVController:(id)controller;	// 0x3059c6c5
// declared property setter: - (void)setDefaultIdentifier:(id)identifier;	// 0x3059cfc5
- (void)setDelegate:(id)delegate;	// 0x3059a4e5
- (void)setNoneAtTop:(BOOL)top;	// 0x3059a9fd
- (void)setNoneString:(id)string;	// 0x3059aaa9
// converted property setter: - (void)setSelectedRingtoneIdentifier:(id)identifier;	// 0x3059a539
// converted property setter: - (void)setSelectedVibrationIdentifier:(id)identifier;	// 0x3059adb1
- (void)setShowsDefault:(BOOL)aDefault;	// 0x3059a7c5
- (void)setShowsDefaultVibration:(BOOL)vibration;	// 0x3059ab1d
- (void)setShowsNoVibrationSelected:(BOOL)selected;	// 0x3059ac89
- (void)setShowsNone:(BOOL)none;	// 0x3059a955
- (void)setShowsNoneVibration:(BOOL)vibration;	// 0x3059ac79
- (void)setShowsNothingSelected:(BOOL)selected;	// 0x3059aaed
- (void)setShowsRingtonesStore:(BOOL)store;	// 0x3059a701
- (void)setShowsUserGeneratedVibrations:(BOOL)vibrations;	// 0x3059ab2d
- (void)setShowsVibrations:(BOOL)vibrations;	// 0x3059aafd
- (void)setShowsVibrationsAlongsideTones:(BOOL)tones;	// 0x3059ab0d
- (void)setTableView:(id)view;	// 0x3059a4f5
- (void)stopPlaying;	// 0x3059cda5
- (void)stopPlayingWithFadeOut:(BOOL)fadeOut;	// 0x3059cd7d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3059b535
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3059bfb1
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x3059bf55
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3059bd81
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x3059c465
- (void)togglePlayWithRingtoneWithIdentifier:(id)identifier;	// 0x3059c961
- (void)vibrationPickerViewController:(id)controller selectedVibrationWithIdentifier:(id)identifier;	// 0x3059ce41
@end

