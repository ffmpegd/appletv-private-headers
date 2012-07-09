/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "SCRCArgumentSubcommand.h"

@class NSString, NSMutableArray;

@interface SCRCArgumentParser : SCRCArgumentSubcommand {
	int _argc;	// 12 = 0xc
	char **_argv;	// 16 = 0x10
	NSMutableArray *_subcommandArray;	// 20 = 0x14
	NSMutableArray *_argumentArray;	// 24 = 0x18
	NSString *_appName;	// 28 = 0x1c
	SCRCArgumentSubcommand *_subcommand;	// 32 = 0x20
	BOOL _isLaunchedAtLogin;	// 36 = 0x24
}
@property(retain) NSString *appName;	// G=0x371113a5; S=0x37111369; converted property
@property(readonly, assign) int argc;	// G=0x37111349; converted property
@property(readonly, assign) char **argv;	// G=0x37111339; converted property
@property(readonly, assign) BOOL isLaunchedAtLogin;	// G=0x37111359; converted property
+ (id)commandPath;	// 0x3711100d
+ (id)processIdentifier;	// 0x37111005
+ (id)versionString;	// 0x37111009
- (id)initWithArgc:(int)argc argv:(const char **)argv;	// 0x37111061
- (id)_displayHelp:(id)help;	// 0x37111db1
- (id)_displayVersion:(id)version;	// 0x37111d0d
- (void)addSubcommand:(id)subcommand;	// 0x371113b5
// converted property getter: - (id)appName;	// 0x371113a5
// converted property getter: - (int)argc;	// 0x37111349
// converted property getter: - (char **)argv;	// 0x37111339
- (void)dealloc;	// 0x3710e639
// converted property getter: - (BOOL)isLaunchedAtLogin;	// 0x37111359
- (BOOL)parse;	// 0x371113fd
- (int)run;	// 0x37111ced
// converted property setter: - (void)setAppName:(id)name;	// 0x37111369
- (id)setRunningAtStartup:(id)startup;	// 0x37112255
- (void)stop;	// 0x3710e619
@end
