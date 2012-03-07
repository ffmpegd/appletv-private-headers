/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import "CoreDAVAccountInfoProvider.h"
#import <DAAccount.h> // Unknown library
#import "CoreDAVLogDelegate.h"
#import "CoreDAVDiscoveryTaskGroupDelegate.h"

@class DACoreDAVTaskManager, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger;

@interface CardDAVAccount : DAAccount <CoreDAVAccountInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate> {
	DACoreDAVTaskManager *_taskManager;	// 64 = 0x40
	CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;	// 68 = 0x44
	DACoreDAVLogger *_curLogger;	// 72 = 0x48
}
@property(assign) int cardDAVAccountVersion;	// G=0x31ba677d; S=0x31ba6799; 
@property(retain) id host;	// G=0x31ba65e5; S=0x31ba6601; converted property
@property(assign) int port;	// G=0x31ba667d; S=0x31ba6699; converted property
@property(retain) id principalURL;	// G=0x31ba63cd; S=0x31ba6341; converted property
@property(retain) id scheme;	// G=0x31ba66b5; S=0x31ba66d1; converted property
@property(retain) id serverComplianceClasses;	// G=0x31ba6ad9; S=0x31ba6add; converted property
@property(retain) id serverRoot;	// G=0x31ba6775; S=0x31ba6779; converted property
@property(readonly, retain) DACoreDAVTaskManager *taskManager;	// G=0x31ba5d89; converted property
@property(assign) BOOL useSSL;	// G=0x31ba66ed; S=0x31ba670d; converted property
@property(retain) id username;	// G=0x31ba654d; S=0x31ba6569; converted property
+ (Class)accountClass;	// 0x31ba58e1
+ (id)addressBookConstraintsPlistPath;	// 0x31ba6ad1
+ (Class)clientClass;	// 0x31ba58fd
+ (id)defaultProperties;	// 0x31ba55bd
+ (id)supportedDataclasses;	// 0x31ba5919
- (id)init;	// 0x31ba5721
- (id)initWithProperties:(id)properties;	// 0x31ba5761
- (void)_massageAddedOrModifiedVCard:(id)card;	// 0x31ba6ad5
- (BOOL)_needsNewAccountIDForOldVersion:(int)oldVersion;	// 0x31ba5e45
- (id)_oldURLsForKeychain;	// 0x31ba5e51
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x31ba5f79
- (BOOL)accountNeedsUpgrade;	// 0x31ba624d
// declared property getter: - (int)cardDAVAccountVersion;	// 0x31ba677d
- (void)checkValidityWithConsumer:(id)consumer;	// 0x31ba5995
- (id)copyImageContentsAtURL:(id)url outError:(id *)error;	// 0x31ba64c1
- (void)coreDAVLogDiagnosticMessage:(id)message atLevel:(int)level;	// 0x31ba6c0d
- (int)coreDAVLogLevel;	// 0x31ba6bed
- (void)coreDAVLogTransmittedDataPartial:(id)partial;	// 0x31ba6c5d
- (int)coreDAVOutputLevel;	// 0x31ba6c05
- (void)coreDAVTransmittedDataFinished;	// 0x31ba6c7d
- (void)dealloc;	// 0x31ba5835
- (void)discoveryTask:(id)task gotAccountInfo:(id)info error:(id)error;	// 0x31ba5c05
- (BOOL)handleCertificateError:(id)error;	// 0x31ba6be9
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x31ba6bb9
// converted property getter: - (id)host;	// 0x31ba65e5
- (BOOL)isEqualToAccount:(id)account;	// 0x31ba67b5
- (id)localizedIdenticalAccountFailureMessage;	// 0x31ba69a9
- (id)localizedInvalidPasswordMessage;	// 0x31ba6a21
- (void)noteHomeSetOnDifferentHost:(id)host;	// 0x31ba6415
// converted property getter: - (int)port;	// 0x31ba667d
// converted property getter: - (id)principalURL;	// 0x31ba63cd
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x31ba6b25
// converted property getter: - (id)scheme;	// 0x31ba66b5
// converted property getter: - (id)serverComplianceClasses;	// 0x31ba6ad9
// converted property getter: - (id)serverRoot;	// 0x31ba6775
// declared property setter: - (void)setCardDAVAccountVersion:(int)version;	// 0x31ba6799
// converted property setter: - (void)setHost:(id)host;	// 0x31ba6601
// converted property setter: - (void)setPort:(int)port;	// 0x31ba6699
// converted property setter: - (void)setPrincipalURL:(id)url;	// 0x31ba6341
// converted property setter: - (void)setScheme:(id)scheme;	// 0x31ba66d1
// converted property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x31ba6add
// converted property setter: - (void)setServerRoot:(id)root;	// 0x31ba6779
- (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x31ba5bc1
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x31ba670d
// converted property setter: - (void)setUsername:(id)username;	// 0x31ba6569
- (BOOL)shouldLogTransmittedData;	// 0x31ba6c51
- (id)spinnerIdentifiers;	// 0x31ba6ae5
- (id)stateString;	// 0x31ba5ddd
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x31ba5939
// converted property getter: - (id)taskManager;	// 0x31ba5d89
- (BOOL)upgradeAccount;	// 0x31ba61c5
// converted property getter: - (BOOL)useSSL;	// 0x31ba66ed
- (id)userAgentHeader;	// 0x31ba6ae1
// converted property getter: - (id)username;	// 0x31ba654d
- (id)wellKnownPathsToCheck;	// 0x31ba5949
@end

