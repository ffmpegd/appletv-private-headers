/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "BulletinBoard-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSData, NSString, NSArray;

@interface BBSectionInfo : NSObject <NSCopying, NSCoding> {
	NSString *_sectionID;	// 4 = 0x4
	NSString *_subsectionID;	// 8 = 0x8
	unsigned _sectionType;	// 12 = 0xc
	BOOL _showsInNotificationCenter;	// 16 = 0x10
	unsigned _suppressedSettings;	// 20 = 0x14
	unsigned _pushSettings;	// 24 = 0x18
	unsigned _alertType;	// 28 = 0x1c
	unsigned _notificationCenterLimit;	// 32 = 0x20
	BOOL _showsInLockScreen;	// 36 = 0x24
	BOOL _showsOnBluetoothDevices;	// 37 = 0x25
	NSString *_pathToWeeAppPluginBundle;	// 40 = 0x28
	NSString *_displayName;	// 44 = 0x2c
	NSData *_iconData;	// 48 = 0x30
	NSArray *_subsections;	// 52 = 0x34
	BBSectionInfo *_parentSection;	// 56 = 0x38
	NSString *_factorySectionID;	// 60 = 0x3c
	NSArray *_dataProviderIDs;	// 64 = 0x40
	BOOL _suppressFromSettings;	// 68 = 0x44
	BOOL _displaysCriticalBulletins;	// 69 = 0x45
@private
	int _subsectionPriority;	// 72 = 0x48
	BOOL _hideWeeApp;	// 76 = 0x4c
	BOOL _showsMessagePreview;	// 77 = 0x4d
}
@property(assign, nonatomic) unsigned alertType;	// G=0x36b78651; S=0x36b78661; @synthesize=_alertType
@property(assign, nonatomic) unsigned bulletinCount;	// G=0x36b778c5; S=0x36b778b5; 
@property(copy, nonatomic) NSArray *dataProviderIDs;	// G=0x36b787c5; S=0x36b787d9; @synthesize=_dataProviderIDs
@property(copy, nonatomic) NSString *displayName;	// G=0x36b78695; S=0x36b786a9; @synthesize=_displayName
@property(assign, nonatomic) BOOL displaysCriticalBulletins;	// G=0x36b786dd; S=0x36b786ed; @synthesize=_displaysCriticalBulletins
@property(assign, nonatomic) BOOL enabled;	// G=0x36b7789d; S=0x36b7788d; 
@property(copy, nonatomic) NSString *factorySectionID;	// G=0x36b787a1; S=0x36b787b5; @synthesize=_factorySectionID
@property(assign, nonatomic) BOOL hideWeeApp;	// G=0x36b78781; S=0x36b78791; @synthesize=_hideWeeApp
@property(copy, nonatomic) NSData *iconData;	// G=0x36b786b9; S=0x36b786cd; @synthesize=_iconData
@property(assign, nonatomic) unsigned notificationCenterLimit;	// G=0x36b78611; S=0x36b78621; @synthesize=_notificationCenterLimit
@property(assign, nonatomic) BBSectionInfo *parentSection;	// G=0x36b78721; S=0x36b78731; @synthesize=_parentSection
@property(copy, nonatomic) NSString *pathToWeeAppPluginBundle;	// G=0x36b78671; S=0x36b78685; @synthesize=_pathToWeeAppPluginBundle
@property(assign, nonatomic) unsigned pushSettings;	// G=0x36b78631; S=0x36b78641; @synthesize=_pushSettings
@property(copy, nonatomic) NSString *sectionID;	// G=0x36b78529; S=0x36b7853d; @synthesize=_sectionID
@property(assign, nonatomic) unsigned sectionType;	// G=0x36b78571; S=0x36b78581; @synthesize=_sectionType
@property(assign, nonatomic) BOOL showsInLockScreen;	// G=0x36b785d1; S=0x36b785e1; @synthesize=_showsInLockScreen
@property(assign, nonatomic) BOOL showsInNotificationCenter;	// G=0x36b785b1; S=0x36b785c1; @synthesize=_showsInNotificationCenter
@property(assign, nonatomic) BOOL showsMessagePreview;	// G=0x36b787e9; S=0x36b787f9; @synthesize=_showsMessagePreview
@property(assign, nonatomic) BOOL showsOnBluetoothDevices;	// G=0x36b785f1; S=0x36b78601; @synthesize=_showsOnBluetoothDevices
@property(copy, nonatomic) NSString *subsectionID;	// G=0x36b7854d; S=0x36b78561; @synthesize=_subsectionID
@property(assign, nonatomic) int subsectionPriority;	// G=0x36b78741; S=0x36b78751; @synthesize=_subsectionPriority
@property(copy, nonatomic) NSArray *subsections;	// G=0x36b786fd; S=0x36b78711; @synthesize=_subsections
@property(assign, nonatomic) BOOL suppressFromSettings;	// G=0x36b78591; S=0x36b785a1; @synthesize=_suppressFromSettings
@property(assign, nonatomic) unsigned suppressedSettings;	// G=0x36b78761; S=0x36b78771; @synthesize=_suppressedSettings
+ (id)defaultSectionInfoForType:(unsigned)type;	// 0x36b76b45
+ (BOOL)defaultStateForSetting:(unsigned)setting inSectionType:(unsigned)sectionType;	// 0x36b76b1d
- (id)init;	// 0x36b76ba5
- (id)initWithCoder:(id)coder;	// 0x36b77d35
- (void)_addSubsection:(id)subsection;	// 0x36b77331
- (void)_associateDataProviderSectionInfo:(id)info;	// 0x36b776ed
- (void)_configureWithDefaultsForSectionType:(unsigned)sectionType;	// 0x36b76d81
- (void)_dissociateDataProviderSectionInfo:(id)info;	// 0x36b777b5
- (id)_pushSettingsDescription;	// 0x36b76eb5
- (void)_replaceSubsection:(id)subsection;	// 0x36b7745d
- (id)_subsectionForID:(id)anId;	// 0x36b775e1
// declared property getter: - (unsigned)alertType;	// 0x36b78651
// declared property getter: - (unsigned)bulletinCount;	// 0x36b778c5
- (id)copyWithZone:(NSZone *)zone;	// 0x36b778d5
// declared property getter: - (id)dataProviderIDs;	// 0x36b787c5
- (void)dealloc;	// 0x36b76bed
- (id)description;	// 0x36b76f7d
// declared property getter: - (id)displayName;	// 0x36b78695
// declared property getter: - (BOOL)displaysCriticalBulletins;	// 0x36b786dd
- (id)effectiveSectionInfo;	// 0x36b78809
- (id)effectiveSectionInfoWithFactoryInfo:(id)factoryInfo;	// 0x36b78da1
// declared property getter: - (BOOL)enabled;	// 0x36b7789d
- (void)encodeWithCoder:(id)coder;	// 0x36b781a9
// declared property getter: - (id)factorySectionID;	// 0x36b787a1
// declared property getter: - (BOOL)hideWeeApp;	// 0x36b78781
// declared property getter: - (id)iconData;	// 0x36b786b9
// declared property getter: - (unsigned)notificationCenterLimit;	// 0x36b78611
// declared property getter: - (id)parentSection;	// 0x36b78721
// declared property getter: - (id)pathToWeeAppPluginBundle;	// 0x36b78671
// declared property getter: - (unsigned)pushSettings;	// 0x36b78631
// declared property getter: - (id)sectionID;	// 0x36b78529
// declared property getter: - (unsigned)sectionType;	// 0x36b78571
// declared property setter: - (void)setAlertType:(unsigned)type;	// 0x36b78661
// declared property setter: - (void)setBulletinCount:(unsigned)count;	// 0x36b778b5
// declared property setter: - (void)setDataProviderIDs:(id)ids;	// 0x36b787d9
// declared property setter: - (void)setDisplayName:(id)name;	// 0x36b786a9
// declared property setter: - (void)setDisplaysCriticalBulletins:(BOOL)bulletins;	// 0x36b786ed
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x36b7788d
// declared property setter: - (void)setFactorySectionID:(id)anId;	// 0x36b787b5
// declared property setter: - (void)setHideWeeApp:(BOOL)app;	// 0x36b78791
// declared property setter: - (void)setIconData:(id)data;	// 0x36b786cd
// declared property setter: - (void)setNotificationCenterLimit:(unsigned)limit;	// 0x36b78621
// declared property setter: - (void)setParentSection:(id)section;	// 0x36b78731
// declared property setter: - (void)setPathToWeeAppPluginBundle:(id)weeAppPluginBundle;	// 0x36b78685
// declared property setter: - (void)setPushSettings:(unsigned)settings;	// 0x36b78641
// declared property setter: - (void)setSectionID:(id)anId;	// 0x36b7853d
// declared property setter: - (void)setSectionType:(unsigned)type;	// 0x36b78581
// declared property setter: - (void)setShowsInLockScreen:(BOOL)lockScreen;	// 0x36b785e1
// declared property setter: - (void)setShowsInNotificationCenter:(BOOL)notificationCenter;	// 0x36b785c1
// declared property setter: - (void)setShowsMessagePreview:(BOOL)preview;	// 0x36b787f9
// declared property setter: - (void)setShowsOnBluetoothDevices:(BOOL)devices;	// 0x36b78601
// declared property setter: - (void)setSubsectionID:(id)anId;	// 0x36b78561
// declared property setter: - (void)setSubsectionPriority:(int)priority;	// 0x36b78751
// declared property setter: - (void)setSubsections:(id)subsections;	// 0x36b78711
// declared property setter: - (void)setSuppressFromSettings:(BOOL)settings;	// 0x36b785a1
// declared property setter: - (void)setSuppressedSettings:(unsigned)settings;	// 0x36b78771
// declared property getter: - (BOOL)showsInLockScreen;	// 0x36b785d1
// declared property getter: - (BOOL)showsInNotificationCenter;	// 0x36b785b1
// declared property getter: - (BOOL)showsMessagePreview;	// 0x36b787e9
// declared property getter: - (BOOL)showsOnBluetoothDevices;	// 0x36b785f1
// declared property getter: - (id)subsectionID;	// 0x36b7854d
// declared property getter: - (int)subsectionPriority;	// 0x36b78741
// declared property getter: - (id)subsections;	// 0x36b786fd
// declared property getter: - (BOOL)suppressFromSettings;	// 0x36b78591
// declared property getter: - (unsigned)suppressedSettings;	// 0x36b78761
@end

