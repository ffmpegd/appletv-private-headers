/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface TLVibrationManager : NSObject {
	BOOL _needsRefresh;	// 4 = 0x4
	BOOL _allowsAutoRefresh;	// 5 = 0x5
	BOOL _unitTestingModeEnabled;	// 6 = 0x6
	NSDictionary *_cachedVibrationPatterns;	// 8 = 0x8
	NSDictionary *_cachedUserGeneratedVibrationPatterns;	// 12 = 0xc
}
@property(assign, nonatomic, setter=_setAllowsAutoRefresh:) BOOL _allowsAutoRefresh;	// G=0x35a345d9; S=0x35a345e9; @synthesize
@property(retain, nonatomic, setter=_setCachedUserGeneratedVibrationPatterns:) NSDictionary *_cachedUserGeneratedVibrationPatterns;	// G=0x35a34639; S=0x35a34649; @synthesize
@property(retain, nonatomic, setter=_setCachedVibrationPatterns:) NSDictionary *_cachedVibrationPatterns;	// G=0x35a34619; S=0x35a34629; @synthesize
@property(assign, nonatomic, getter=_isUnitTestingModeEnabled, setter=_setUnitTestingModeEnabled:) BOOL _unitTestingModeEnabled;	// G=0x35a345f9; S=0x35a34609; @synthesize
@property(readonly, assign, nonatomic) NSDictionary *_userGeneratedVibrationPatterns;	// G=0x35a338bd; 
@property(readonly, assign, nonatomic) NSDictionary *_vibrationPatterns;	// G=0x35a332c9; 
@property(assign, nonatomic) BOOL allowsAutoRefresh;	// G=0x35a32d85; S=0x35a32d9d; 
@property(assign, nonatomic) BOOL needsRefresh;	// G=0x35a345b9; @synthesize=_needsRefresh
+ (void)_handleSystemVibrationDidChangeNotification;	// 0x35a33861
+ (void)releaseSharedVibrationManager;	// 0x35a329d5
+ (id)sharedVibrationManager;	// 0x35a32985
- (id)init;	// 0x35a32a19
- (id)initWithUnitTestingModeEnabled:(BOOL)unitTestingModeEnabled;	// 0x35a32a2d
// declared property getter: - (BOOL)_allowsAutoRefresh;	// 0x35a345d9
// declared property getter: - (id)_cachedUserGeneratedVibrationPatterns;	// 0x35a34639
// declared property getter: - (id)_cachedVibrationPatterns;	// 0x35a34619
- (id)_copySystemWideVibrationPatternPreferenceKeyForAlertType:(int)alertType accountIdentifier:(id)identifier;	// 0x35a337e5
- (id)_currentVibrationIdentifierForAlertType:(int)alertType accountIdentifier:(id)identifier;	// 0x35a32f51
- (void)_handleUserGeneratedVibrationsDidChangeNotification;	// 0x35a338a9
// declared property getter: - (BOOL)_isUnitTestingModeEnabled;	// 0x35a345f9
- (id)_localizedNameForVibrationWithIdentifier:(id)identifier;	// 0x35a3339d
- (void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;	// 0x35a3448d
- (BOOL)_migrateLegacySettings;	// 0x35a34211
- (id)_nameOfVibrationWithIdentifier:(id)identifier;	// 0x35a334e9
- (unsigned)_numberOfUserGeneratedVibrations;	// 0x35a34161
- (BOOL)_removeAllUserGeneratedVibrationsWithError:(id *)error;	// 0x35a34189
- (BOOL)_saveUserGeneratedVibrationPatterns:(id)patterns error:(id *)error;	// 0x35a33d45
- (BOOL)_sendUserGeneratedVibrationPatternsAffectingMessage:(id)message error:(id *)error;	// 0x35a33b21
// declared property setter: - (void)_setAllowsAutoRefresh:(BOOL)refresh;	// 0x35a345e9
// declared property setter: - (void)_setCachedUserGeneratedVibrationPatterns:(id)patterns;	// 0x35a34649
// declared property setter: - (void)_setCachedVibrationPatterns:(id)patterns;	// 0x35a34629
- (void)_setNeedsRefresh:(BOOL)refresh;	// 0x35a345c9
// declared property setter: - (void)_setUnitTestingModeEnabled:(BOOL)enabled;	// 0x35a34609
- (unsigned)_storedSystemVibrationDataMigrationVersion;	// 0x35a3441d
// declared property getter: - (id)_userGeneratedVibrationPatterns;	// 0x35a338bd
// declared property getter: - (id)_vibrationPatterns;	// 0x35a332c9
- (id)addUserGeneratedVibrationPattern:(id)pattern name:(id)name error:(id *)error;	// 0x35a33ded
- (id)allSystemVibrationIdentifiers;	// 0x35a33709
- (id)allUserGeneratedVibrationIdentifiers;	// 0x35a337a1
// declared property getter: - (BOOL)allowsAutoRefresh;	// 0x35a32d85
- (id)currentVibrationIdentifierForAlertType:(int)alertType;	// 0x35a32f19
- (id)currentVibrationIdentifierForAlertType:(int)alertType accountIdentifier:(id)identifier;	// 0x35a33055
- (id)currentVibrationIdentifierForType:(int)type;	// 0x35a34659
- (id)currentVibrationIdentifierForType:(int)type accountIdentifier:(id)identifier;	// 0x35a34679
- (id)currentVibrationNameForAlertType:(int)alertType;	// 0x35a33151
- (id)currentVibrationNameForType:(int)type;	// 0x35a34699
- (id)currentVibrationPatternForAlertType:(int)alertType;	// 0x35a33181
- (id)currentVibrationPatternForType:(int)type;	// 0x35a346a9
- (void)dealloc;	// 0x35a32c11
- (id)defaultVibrationIdentifierForAlertType:(int)alertType;	// 0x35a331bd
- (id)defaultVibrationNameForAlertType:(int)alertType;	// 0x35a331e5
- (id)defaultVibrationPatternForAlertType:(int)alertType;	// 0x35a33215
- (BOOL)deleteUserGeneratedVibrationPatternWithIdentifier:(id)identifier error:(id *)error;	// 0x35a340b1
- (id)nameOfVibrationWithIdentifier:(id)identifier;	// 0x35a335b1
// declared property getter: - (BOOL)needsRefresh;	// 0x35a345b9
- (id)noneVibrationIdentifier;	// 0x35a3325d
- (id)noneVibrationName;	// 0x35a33269
- (id)noneVibrationPattern;	// 0x35a33299
- (id)patternForVibrationWithIdentifier:(id)identifier;	// 0x35a335c9
- (id)patternForVibrationWithIdentifier:(id)identifier repeating:(BOOL)repeating;	// 0x35a33655
- (BOOL)refresh;	// 0x35a32e8d
// declared property setter: - (void)setAllowsAutoRefresh:(BOOL)refresh;	// 0x35a32d9d
- (void)setCurrentVibrationIdentifier:(id)identifier forAlertType:(int)alertType;	// 0x35a32f2d
- (void)setCurrentVibrationIdentifier:(id)identifier forAlertType:(int)alertType accountIdentifier:(id)identifier3;	// 0x35a3308d
- (void)setCurrentVibrationIdentifier:(id)identifier forType:(int)type;	// 0x35a34669
- (void)setCurrentVibrationIdentifier:(id)identifier forType:(int)type accountIdentifier:(id)identifier3;	// 0x35a34689
- (BOOL)setName:(id)name forUserGeneratedVibrationWithIdentifier:(id)identifier error:(id *)error;	// 0x35a33fad
- (BOOL)vibrationWithIdentifierIsValid:(id)identifierIsValid;	// 0x35a337c9
@end

