/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface OCXSStream : NSObject {
	NSMutableArray *mLevelStack;	// 4 = 0x4
}
- (id)init;	// 0x33a3c0a5
- (int)currentContextChildDepth;	// 0x33a3c36d
- (int)currentContextDepth;	// 0x33a3c31d
- (void)dealloc;	// 0x33a42165
- (BOOL)hasLevels;	// 0x33a3c2f1
- (BOOL)popLevel;	// 0x33a4211d
- (void)pushLevel:(int)level name:(const char *)name;	// 0x33a3c115
@end

