/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface SKDiagnostics : NSObject {
	unsigned _diagDataAccess;	// 4 = 0x4
	unsigned _pmuService;	// 8 = 0x8
	HDHangHistory *_hangHistory;	// 12 = 0xc
	void *_sysCfg;	// 16 = 0x10
}
@property(readonly, assign) unsigned diagDataAccess;	// G=0x30c4efcd; converted property
@property(readonly, assign) HDHangHistory *hangHistory;	// G=0x30c4f3f5; converted property
@property(readonly, assign) unsigned pmuService;	// G=0x30c4f1d1; converted property
@property(readonly, assign) void *sysCfg;	// G=0x30c4f5ed; converted property
+ (id)sharedInstance;	// 0x30c4ee6d
- (id)init;	// 0x30c4ef3d
- (int)clearHangHistory;	// 0x30c4f555
- (void)clearLastBootError;	// 0x30c4f399
- (void)dealloc;	// 0x30c4ef69
// converted property getter: - (unsigned)diagDataAccess;	// 0x30c4efcd
- (void)flagSuccessfulBoot;	// 0x30c4f59d
// converted property getter: - (HDHangHistory *)hangHistory;	// 0x30c4f3f5
- (int)lastBootError;	// 0x30c4f365
- (int)lastBootStage;	// 0x30c4f305
// converted property getter: - (unsigned)pmuService;	// 0x30c4f1d1
- (void *)pmuValueForIdentifier:(id)identifier;	// 0x30c4f2ad
- (int)readDiagnosticData:(char *)data offset:(unsigned)offset size:(unsigned)size set:(CFStringRef)set;	// 0x30c4f035
- (HDHangHistory *)readHangHistory;	// 0x30c4f42d
- (void *)readSysCfg;	// 0x30c4f619
// converted property getter: - (void *)sysCfg;	// 0x30c4f5ed
- (int)writeDiagnosticData:(char *)data offset:(unsigned)offset size:(unsigned)size commit:(int)commit set:(CFStringRef)set;	// 0x30c4f0b9
- (int)writeHangHistory:(HDHangHistory *)history;	// 0x30c4f4d9
- (int)writeSysCfg:(void *)cfg;	// 0x30c4f679
@end
