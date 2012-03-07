/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSString.h"


__attribute__((visibility("hidden")))
@interface NSPathStore2 : NSString {
@private
	unsigned _lengthAndRefCount;	// 4 = 0x4
	unsigned short _characters[0];	// 8 = 0x8
}
+ (id)pathStoreWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x32005f71
+ (id)pathWithComponents:(id)components;	// 0x32012b4d
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)pathUsingCache;	// 0x3200d84d
- (id)_stringByStandardizingPathUsingCache:(BOOL)cache;	// 0x32011301
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x3200da01
- (id)copyWithZone:(NSZone *)zone;	// 0x3200d9a5
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x32007935
- (unsigned)hash;	// 0x3200d829
- (BOOL)isAbsolutePath;	// 0x32013201
- (BOOL)isEqualToString:(id)string;	// 0x32006031
- (id)lastPathComponent;	// 0x320239d1
- (unsigned)length;	// 0x32007921
- (id)pathComponents;	// 0x32095911
- (id)pathExtension;	// 0x3200d141
- (id)stringByAbbreviatingWithTildeInPath;	// 0x32033b89
- (id)stringByAppendingPathComponent:(id)component;	// 0x3200b1cd
- (id)stringByAppendingPathExtension:(id)extension;	// 0x3202218d
- (id)stringByDeletingLastPathComponent;	// 0x3200d0c1
- (id)stringByDeletingPathExtension;	// 0x3202392d
- (id)stringByExpandingTildeInPath;	// 0x3203387d
- (id)stringByResolvingSymlinksInPath;	// 0x320319a5
- (id)stringByStandardizingPath;	// 0x32031679
@end
