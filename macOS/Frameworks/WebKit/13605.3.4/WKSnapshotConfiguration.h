//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>

@class NSNumber;

@interface WKSnapshotConfiguration : NSObject <NSCopying>
{
    NSNumber *_snapshotWidth;
    struct CGRect _rect;
}

@property(copy, nonatomic) NSNumber *snapshotWidth; // @synthesize snapshotWidth=_snapshotWidth;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

