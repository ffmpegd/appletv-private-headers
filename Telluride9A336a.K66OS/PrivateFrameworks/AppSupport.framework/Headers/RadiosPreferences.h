/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library
#import "AppSupport-Structs.h"

@protocol RadiosPreferencesDelegate;

@interface RadiosPreferences : NSObject {
	SCPreferencesRef _prefs;	// 4 = 0x4
	int _applySkipCount;	// 8 = 0x8
	id<RadiosPreferencesDelegate> _delegate;	// 12 = 0xc
	BOOL _isCachedAirplaneModeValid;	// 16 = 0x10
	BOOL _cachedAirplaneMode;	// 17 = 0x11
	BOOL notifyForExternalChangeOnly;	// 18 = 0x12
}
@property(assign, nonatomic) BOOL airplaneMode;	// G=0x3604c0c9; S=0x3604c061; 
@property(assign, nonatomic) id<RadiosPreferencesDelegate> delegate;	// G=0x3604bd51; S=0x3604bd61; @synthesize=_delegate
@property(assign, nonatomic) BOOL notifyForExternalChangeOnly;	// G=0x3604bd31; S=0x3604bd41; @synthesize
- (id)init;	// 0x3604bd71
// declared property getter: - (BOOL)airplaneMode;	// 0x3604c0c9
- (void)dealloc;	// 0x3604c135
// declared property getter: - (id)delegate;	// 0x3604bd51
- (void *)getValueForKey:(id)key;	// 0x3604be95
- (void)initializeSCPrefs:(id)prefs;	// 0x3604bf59
// declared property getter: - (BOOL)notifyForExternalChangeOnly;	// 0x3604bd31
- (void)notifyTarget:(unsigned)target;	// 0x3604bebd
- (void)refresh;	// 0x3604c041
// declared property setter: - (void)setAirplaneMode:(BOOL)mode;	// 0x3604c061
- (void)setCallback:(/*function-pointer*/ void *)callback withContext:(XXStruct_K1psTC *)context;	// 0x3604bdd5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3604bd61
// declared property setter: - (void)setNotifyForExternalChangeOnly:(BOOL)externalChangeOnly;	// 0x3604bd41
- (void)setValue:(void *)value forKey:(id)key;	// 0x3604bded
- (void)synchronize;	// 0x3604bea9
@end

