//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRCameraReader, NSMutableDictionary;

@interface CRInsightsContext : NSObject
{
    NSMutableDictionary *_info;
    CRCameraReader *_cameraReader;
}

@property(nonatomic) __weak CRCameraReader *cameraReader; // @synthesize cameraReader=_cameraReader;
@property(retain, nonatomic) NSMutableDictionary *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (id)description;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

