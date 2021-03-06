/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MCRestrictionManager : NSObject {
	NSMutableDictionary *_defaultRestrictions;	// 4 = 0x4
	NSMutableDictionary *_restrictions;	// 8 = 0x8
	NSMutableDictionary *_profileRestrictions;	// 12 = 0xc
	NSMutableDictionary *_clientRestrictions;	// 16 = 0x10
	NSDictionary *_userSettings;	// 20 = 0x14
	NSDictionary *_effectiveUserSettings;	// 24 = 0x18
	NSDictionary *_clientTypeLoaders;	// 28 = 0x1c
	CFDictionaryRef _clientTypeToLoaderClass;	// 32 = 0x20
	CFDictionaryRef _clientTypeToLoaderSelector;	// 36 = 0x24
	CFDictionaryRef _clientTypeToRecomputeComplianceSelector;	// 40 = 0x28
	NSObject<OS_dispatch_queue> *_syncQueue;	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *_nagMetaQueue;	// 48 = 0x30
	int _senderPID;	// 52 = 0x34
}
@property(readonly, retain) NSMutableDictionary *clientRestrictions;	// G=0x344a778d; converted property
@property(readonly, retain) NSDictionary *effectiveUserSettings;	// G=0x344ac161; converted property
@property(readonly, retain) NSMutableDictionary *profileRestrictions;	// G=0x344a6fe5; converted property
@property(assign, nonatomic) int senderPID;	// G=0x344adeb1; S=0x344adec1; @synthesize=_senderPID
@property(readonly, retain) NSDictionary *userSettings;	// G=0x344abeb1; converted property
+ (BOOL)_isDictionary:(id)dictionary differentFromDictionary:(id)dictionary2;	// 0x344ade6d
+ (void)_setPathsRestrictionsFilePath:(id)path defaultRestrictionsFilePath:(id)path2 clientTypeLoadersFilePath:(id)path3 profileRestrictionsFilePath:(id)path4 clientRestrictionsFilePath:(id)path5 userSettingsFilePath:(id)path6 effectiveUserSettingsFilePath:(id)path7;	// 0x344a6615
+ (BOOL)boolSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;	// 0x344adbdd
+ (int)boolSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;	// 0x344ada9d
+ (int)defaultBoolValueForSetting:(id)setting;	// 0x344ad91d
+ (id)defaultParametersForBoolSetting:(id)boolSetting;	// 0x344ad805
+ (id)defaultParametersForValueSetting:(id)valueSetting;	// 0x344ad891
+ (id)defaultSettingsDict;	// 0x344ad7e9
+ (id)defaultValueForSetting:(id)setting;	// 0x344ad9ed
+ (id)filterRestrictionDictionaryForPublicUse:(id)publicUse;	// 0x344ab381
+ (id)objectForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x344abab9
+ (BOOL)restrictedBool:(id)aBool changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;	// 0x344abb3d
+ (int)restrictedBoolForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x344ab931
+ (BOOL)restrictedValue:(id)value changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;	// 0x344abc85
+ (id)restrictionsAfterApplyingRestrictionsDictionary:(id)dictionary toRestrictionsDictionary:(id)restrictionsDictionary outChangeDetected:(BOOL *)detected outError:(id *)error;	// 0x344aa66d
+ (id)restrictionsWithCurrentRestrictions:(id)currentRestrictions defaultRestrictions:(id)restrictions profileRestrictions:(id)restrictions3 clientRestrictions:(id)restrictions4 outRestrictionsChanged:(BOOL *)changed outError:(id *)error;	// 0x344ab045
+ (id)sharedManager;	// 0x344a66b1
+ (id)valueForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x344aba09
+ (BOOL)valueSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;	// 0x344add25
+ (id)valueSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;	// 0x344adb4d
- (void).cxx_destruct;	// 0x344aded1
- (id)_clientRestrictions;	// 0x344a766d
- (id)_clientRestrictionsForClientUUID:(id)clientUUID;	// 0x344a78a9
- (id)_clientTypeForClientUUID:(id)clientUUID;	// 0x344a7939
- (id)_currentRestrictionsDictionary;	// 0x344a6c01
- (id)_defaultRestrictionsDictionary;	// 0x344a68a9
- (id)_defaultSettingsDictionary;	// 0x344a6be5
- (id)_effectiveUserSettings;	// 0x344ac07d
- (id)_init;	// 0x344aa439
- (id)_liveClientUUIDsForClientType:(id)clientType;	// 0x344a917d
- (id)_loadClientLoaders;	// 0x344a8c19
- (id)_profileRestrictions;	// 0x344a6ec5
- (BOOL)_recomputeEffectiveUserSettings;	// 0x344ac4b9
- (BOOL)_setAllClientRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outError:(id *)error;	// 0x344a8021
- (void)_setClientRestrictionsWithoutNotifications:(id)notifications;	// 0x344a7fc5
- (BOOL)_setEffectiveUserSettings:(id)settings;	// 0x344ac371
- (void)_setRestrictions:(id)restrictions;	// 0x344a6e19
- (BOOL)_setUserSettings:(id)settings;	// 0x344abfcd
- (id)_userInfoForClientUUID:(id)clientUUID;	// 0x344a7b25
- (id)_userSettings;	// 0x344abdcd
- (id)allClientUUIDsForClientType:(id)clientType;	// 0x344a7d11
// converted property getter: - (id)clientRestrictions;	// 0x344a778d
- (id)clientRestrictionsForClientUUID:(id)clientUUID;	// 0x344a79c9
- (id)combinedProfileRestrictions;	// 0x344a7101
- (id)currentRestrictionsDictionary;	// 0x344a6cfd
- (void)dealloc;	// 0x344aa579
- (id)defaultRestrictionsDictionary;	// 0x344a6ab5
- (id)description;	// 0x344aa4d5
- (id)effectiveParametersForBoolSetting:(id)boolSetting;	// 0x344ace11
- (id)effectiveParametersForValueSetting:(id)valueSetting;	// 0x344ace9d
- (int)effectiveRestrictedBoolForSetting:(id)setting;	// 0x344acf29
// converted property getter: - (id)effectiveUserSettings;	// 0x344ac161
- (id)effectiveValueForSetting:(id)setting;	// 0x344acf9d
- (void)invalidateRestrictions;	// 0x344a672d
- (void)invalidateSettings;	// 0x344a6801
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)restrictions;	// 0x344acff1
- (BOOL)isValueSettingLockedDownByRestrictions:(id)restrictions;	// 0x344ad111
- (void)notifyClientsToRecomputeCompliance;	// 0x344a9215
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)lastLockDate;	// 0x344aa325
- (id)objectForFeature:(id)feature;	// 0x344ab8b9
- (id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)dictionary outChangeDetected:(BOOL *)detected outError:(id *)error;	// 0x344aa5e9
// converted property getter: - (id)profileRestrictions;	// 0x344a6fe5
- (BOOL)recomputeNagMetadata;	// 0x344a98c1
- (void)removeBoolSetting:(id)setting;	// 0x344ad3d1
- (BOOL)removeOrphanedClientRestrictions;	// 0x344a9351
- (void)removeValueSetting:(id)setting;	// 0x344ad569
- (void)resetAllSettingsToDefaults;	// 0x344ad701
- (int)restrictedBoolForFeature:(id)feature;	// 0x344ab7d9
// declared property getter: - (int)senderPID;	// 0x344adeb1
- (BOOL)setAllClientRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x344a84a5
- (void)setBoolValue:(BOOL)value forSetting:(id)setting;	// 0x344ac27d
- (BOOL)setClientRestrictions:(id)restrictions clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarning:(id)warning outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed7 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x344a8685
- (BOOL)setParametersForSettingsByType:(id)settingsByType;	// 0x344acc61
- (BOOL)setProfileRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x344a7271
// declared property setter: - (void)setSenderPID:(int)pid;	// 0x344adec1
- (void)setShowNagMessage;	// 0x344aa275
- (void)setUserInfo:(id)info forClientUUID:(id)clientUUID;	// 0x344a827d
- (id)userInfoForClientUUID:(id)clientUUID;	// 0x344a7bb5
// converted property getter: - (id)userSettings;	// 0x344abeb1
- (id)valueForFeature:(id)feature;	// 0x344ab841
@end

