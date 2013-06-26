/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray;

@interface SCRCArgumentSubcommand : NSObject {
	NSString *_subcommandName;	// 4 = 0x4
	NSMutableArray *_optionArray;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *optionArray;	// G=0x336f6471; converted property
@property(readonly, retain) NSString *subcommandName;	// G=0x336f6461; converted property
+ (id)subcommandWithName:(id)name;	// 0x336f6285
- (id)initWithName:(id)name;	// 0x336f62d1
- (void)addOption:(id)option argument:(id)argument target:(id)target action:(SEL)action argumentDescription:(id)description required:(BOOL)required;	// 0x336f6489
- (void)addOptions;	// 0x336f636d
- (int)compare:(id)compare;	// 0x336f6421
- (void)dealloc;	// 0x336f26ed
- (id)description;	// 0x336f65b9
- (id)formattedHelpFooter;	// 0x336f6485
- (id)formattedHelpHeader;	// 0x336f6481
- (unsigned)hash;	// 0x336f6401
- (BOOL)isEqual:(id)equal;	// 0x336f6371
// converted property getter: - (id)optionArray;	// 0x336f6471
- (int)run;	// 0x336f65b1
- (void)showHelp;	// 0x336f65b5
- (void)stop;	// 0x336f2e81
// converted property getter: - (id)subcommandName;	// 0x336f6461
@end
