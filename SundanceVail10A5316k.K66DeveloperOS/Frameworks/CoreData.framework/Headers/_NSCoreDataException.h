/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSException.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden"),objc_exception))
@interface _NSCoreDataException : NSException {
@private
	long _code;	// 20 = 0x14
	NSString *_domain;	// 24 = 0x18
}
@property(readonly, assign) long code;	// G=0x32d35349; converted property
@property(readonly, retain) NSString *domain;	// G=0x32d35359; converted property
+ (id)exceptionWithName:(id)name code:(long)code reason:(id)reason userInfo:(id)info;	// 0x32d351fd
- (id)initWithName:(id)name code:(long)code reason:(id)reason userInfo:(id)info;	// 0x32d35249
- (id)initWithName:(id)name reason:(id)reason userInfo:(id)info;	// 0x32d35291
- (void)_setDomain:(id)domain;	// 0x32d35305
// converted property getter: - (long)code;	// 0x32d35349
- (void)dealloc;	// 0x32d352b9
// converted property getter: - (id)domain;	// 0x32d35359
@end

