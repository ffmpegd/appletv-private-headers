/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <NSObject.h> // Unknown library

@class MBAppManager, MBDebugContext, NSString, MBProperties, MBSettingsContext, MBDomainManager;

@interface MBEngine : NSObject {
	MBSettingsContext *_settingsContext;	// 4 = 0x4
	MBDebugContext *_debugContext;	// 8 = 0x8
	MBProperties *_properties;	// 12 = 0xc
	MBDomainManager *_domainManager;	// 16 = 0x10
	MBAppManager *_appManager;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) MBAppManager *appManager;	// G=0x347b5419; @synthesize=_appManager
@property(readonly, assign, nonatomic, getter=isBackgroundRestore) BOOL backgroundRestore;	// G=0x347b4df9; 
@property(readonly, assign, nonatomic, getter=isBackupEngine) BOOL backupEngine;	// G=0x347b4d29; 
@property(readonly, assign, nonatomic, getter=shouldCommitIfPossible) BOOL commitIfPossible;	// G=0x347b4e8d; 
@property(readonly, assign, nonatomic) MBDebugContext *debugContext;	// G=0x347b53e9; @synthesize=_debugContext
@property(readonly, assign, nonatomic) MBDomainManager *domainManager;	// G=0x347b5409; @synthesize=_domainManager
@property(readonly, assign, nonatomic, getter=isDriveEngine) BOOL driveEngine;	// G=0x347b4c99; 
@property(readonly, assign, nonatomic) int engineMode;	// G=0x347b4cd5; 
@property(readonly, assign, nonatomic) NSString *engineModeString;	// G=0x347b4cf1; 
@property(readonly, assign, nonatomic) int engineType;	// G=0x347b4c45; 
@property(readonly, assign, nonatomic) NSString *engineTypeString;	// G=0x347b4c61; 
@property(readonly, assign, nonatomic, getter=isForegroundRestore) BOOL foregroundRestore;	// G=0x347b4db9; 
@property(readonly, assign, nonatomic, getter=isMigrate) BOOL migrate;	// G=0x347b4e71; 
@property(readonly, assign, nonatomic) MBProperties *properties;	// G=0x347b53f9; @synthesize=_properties
@property(readonly, assign, nonatomic, getter=isRestoreEngine) BOOL restoreEngine;	// G=0x347b4d45; 
@property(readonly, assign, nonatomic) int restoreType;	// G=0x347b4d65; 
@property(readonly, assign, nonatomic) NSString *restoreTypeString;	// G=0x347b4d81; 
@property(readonly, assign, nonatomic, getter=isServiceEngine) BOOL serviceEngine;	// G=0x347b4cb5; 
@property(readonly, assign, nonatomic) MBSettingsContext *settingsContext;	// G=0x347b53d9; @synthesize=_settingsContext
@property(readonly, assign, nonatomic, getter=isSplitRestore) BOOL splitRestore;	// G=0x347b4e35; 
+ (id)stringForEngineMode:(int)engineMode;	// 0x347b4abd
+ (id)stringForEngineType:(int)engineType;	// 0x347b4a99
+ (id)stringForRestoreType:(int)restoreType;	// 0x347b4ae1
- (id)initWithSettingsContext:(id)settingsContext debugContext:(id)context domainManager:(id)manager;	// 0x347b4b15
- (id)aggregateDictionaryKey:(id)key;	// 0x347b51dd
// declared property getter: - (id)appManager;	// 0x347b5419
- (void)dealloc;	// 0x347b4ba5
// declared property getter: - (id)debugContext;	// 0x347b53e9
// declared property getter: - (id)domainManager;	// 0x347b5409
// declared property getter: - (int)engineMode;	// 0x347b4cd5
// declared property getter: - (id)engineModeString;	// 0x347b4cf1
// declared property getter: - (int)engineType;	// 0x347b4c45
// declared property getter: - (id)engineTypeString;	// 0x347b4c61
// declared property getter: - (BOOL)isBackgroundRestore;	// 0x347b4df9
// declared property getter: - (BOOL)isBackupEngine;	// 0x347b4d29
// declared property getter: - (BOOL)isDriveEngine;	// 0x347b4c99
// declared property getter: - (BOOL)isForegroundRestore;	// 0x347b4db9
// declared property getter: - (BOOL)isMigrate;	// 0x347b4e71
// declared property getter: - (BOOL)isRestoreEngine;	// 0x347b4d45
// declared property getter: - (BOOL)isServiceEngine;	// 0x347b4cb5
// declared property getter: - (BOOL)isSplitRestore;	// 0x347b4e35
// declared property getter: - (id)properties;	// 0x347b53f9
- (void)pushAggregateDictionaryTotalFileCount:(long long)count totalFileSize:(long long)size duration:(double)duration;	// 0x347b52b1
// declared property getter: - (int)restoreType;	// 0x347b4d65
// declared property getter: - (id)restoreTypeString;	// 0x347b4d81
// declared property getter: - (id)settingsContext;	// 0x347b53d9
// declared property getter: - (BOOL)shouldCommitIfPossible;	// 0x347b4e8d
- (id)validateFile:(id)file;	// 0x347b4ea9
@end
