/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString, NSArray;

@interface NSProcessInfo : NSObject {
	NSDictionary *environment;	// 4 = 0x4
	NSArray *arguments;	// 8 = 0x8
	NSString *hostName;	// 12 = 0xc
	NSString *name;	// 16 = 0x10
	int automaticTerminationOptOutCounter;	// 20 = 0x14
}
@property(retain) NSArray *arguments;	// G=0x34d46e71; S=0x34dcc44d; converted property
@property(assign) BOOL automaticTerminationSupportEnabled;	// G=0x34dccb25; S=0x34dccaf5; converted property
@property(readonly, retain) NSDictionary *environment;	// G=0x34dcc061; converted property
@property(readonly, retain) NSString *hostName;	// G=0x34dcc529; converted property
@property(retain) id processName;	// G=0x34d45f65; S=0x34dcc699; converted property
+ (id)processInfo;	// 0x34d45edd
- (id)init;	// 0x34d45f09
- (void)_exitIfSuddenTerminationEnabledWithStatus:(int)status;	// 0x34dcca85
- (void)_exitWhenSuddenTerminationEnabledWithStatus:(int)status;	// 0x34dcca89
- (int)_suddenTerminationDisablingCount;	// 0x34dcca8d
- (unsigned)activeProcessorCount;	// 0x34dcc951
// converted property getter: - (id)arguments;	// 0x34d46e71
// converted property getter: - (BOOL)automaticTerminationSupportEnabled;	// 0x34dccb25
- (void)dealloc;	// 0x34dcbfd5
- (void)disableAutomaticTermination:(id)termination;	// 0x34dcca95
- (void)disableSuddenTermination;	// 0x34dcca7d
- (void)enableAutomaticTermination:(id)termination;	// 0x34dccac5
- (void)enableSuddenTermination;	// 0x34dcca81
// converted property getter: - (id)environment;	// 0x34dcc061
- (id)globallyUniqueString;	// 0x34dcc779
// converted property getter: - (id)hostName;	// 0x34dcc529
- (BOOL)isTranslated;	// 0x34dcca0d
- (unsigned)operatingSystem;	// 0x34dcc849
- (id)operatingSystemName;	// 0x34dcc84d
- (id)operatingSystemVersionString;	// 0x34dcc8b9
- (unsigned long long)physicalMemory;	// 0x34dcc9b1
- (int)processIdentifier;	// 0x34dcc775
// converted property getter: - (id)processName;	// 0x34d45f65
- (unsigned)processorCount;	// 0x34dcc8e5
// converted property setter: - (void)setArguments:(id)arguments;	// 0x34dcc44d
// converted property setter: - (void)setAutomaticTerminationSupportEnabled:(BOOL)enabled;	// 0x34dccaf5
// converted property setter: - (void)setProcessName:(id)name;	// 0x34dcc699
- (double)systemUptime;	// 0x34d76c1d
- (id)userFullName;	// 0x34dcc841
- (id)userHomeDirectory;	// 0x34dcc845
- (id)userName;	// 0x34dcc83d
@end

