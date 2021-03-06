/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface OADFormula : NSObject {
@private
	int mType;	// 4 = 0x4
	OADFormulaArg mArgs[3];	// 8 = 0x8
	NSString *mName;	// 32 = 0x20
}
@property(retain) id name;	// G=0x34e20dc1; S=0x34d38691; converted property
- (id)initWithType:(int)type arg0:(OADFormulaArg)a0 arg1:(OADFormulaArg)a1 arg2:(OADFormulaArg)a2;	// 0x34cca57d
- (OADFormulaArg)argAtIndex:(unsigned)index;	// 0x34cca9c5
- (void)dealloc;	// 0x34ccc2dd
// converted property getter: - (id)name;	// 0x34e20dc1
// converted property setter: - (void)setName:(id)name;	// 0x34d38691
- (int)type;	// 0x34ccaa79
@end

