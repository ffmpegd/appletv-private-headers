/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "MusicLibrary-Structs.h"


@interface ML3Predicate : NSObject <NSCoding, NSCopying> {
}
- (id)initWithCoder:(id)coder;	// 0x346d3fe9
- (id)SQLForEntityClass:(Class)entityClass;	// 0x346d4089
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x346b0985
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x346d4085
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x346b0d39
- (id)copyWithZone:(NSZone *)zone;	// 0x346d4081
- (void)encodeWithCoder:(id)coder;	// 0x346d4025
- (unsigned)hash;	// 0x346d4059
- (BOOL)isDynamicForEntityClass:(Class)entityClass;	// 0x346b0925
- (BOOL)isEqual:(id)equal;	// 0x346d4029
@end

