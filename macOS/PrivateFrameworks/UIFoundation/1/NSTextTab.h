//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCoding-Protocol.h>
#import <UIFoundation/NSCopying-Protocol.h>

@class NSDictionary;

@interface NSTextTab : NSObject <NSCopying, NSCoding>
{
    struct {
        unsigned int alignment:4;
        unsigned int refCount:24;
        unsigned int unused:4;
        unsigned int :32;
    } _flags;
    double _location;
    id _reserved;
}

+ (id)columnTerminatorsForLocale:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long tabStopType;
@property(readonly) double location;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)dealloc;
@property(readonly, copy) NSDictionary *options;
@property(readonly) unsigned long long alignment;
- (id)initWithTextAlignment:(unsigned long long)arg1 location:(double)arg2 options:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 location:(double)arg2;

@end

