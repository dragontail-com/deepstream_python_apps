/*
 * SPDX-FileCopyrightText: Copyright (c) 2021-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

namespace pydsdoc
{
    namespace nvmeta
    {
        namespace MetaTypeDoc
        {
            constexpr const char* descr = R"pyds(
                *Enumerator*. Specifies the type of meta data.
                NVIDIA defined NvDsMetaType will be present in the range from NVDS_BATCH_META to NVDS_START_USER_META.
                User can add its own metadata type NVDS_START_USER_META onwards.)pyds";

            constexpr const char* NVDS_INVALID_META=R"pyds(NVDS_INVALID_META)pyds";
            constexpr const char* NVDS_BATCH_META=R"pyds(metadata type to be set for formed batch)pyds";
            constexpr const char* NVDS_FRAME_META=R"pyds(metadata type to be set for frame)pyds";
            constexpr const char* NVDS_OBJ_META=R"pyds(metadata type to be set for detected object )pyds";
            constexpr const char* NVDS_DISPLAY_META=R"pyds(metadata type to be set for display)pyds";
            constexpr const char* NVDS_CLASSIFIER_META=R"pyds(metadata type to be set for object classifier)pyds";
            constexpr const char* NVDS_LABEL_INFO_META=R"pyds(metadata type to be set for given label of classifier)pyds";
            constexpr const char* NVDS_USER_META=R"pyds(used for internal purpose)pyds";
            constexpr const char* NVDS_PAYLOAD_META=R"pyds(metadata type to be set for payload generated by msg converter)pyds";
            constexpr const char* NVDS_EVENT_MSG_META=R"pyds(metadata type to be set for payload generated by msg broker)pyds";
            constexpr const char* NVDS_OPTICAL_FLOW_META=R"pyds(metadata type to be set for optical flow)pyds";
            constexpr const char* NVDS_LATENCY_MEASUREMENT_META=R"pyds(metadata type to be set for latency measurement)pyds";
            constexpr const char* NVDSINFER_TENSOR_OUTPUT_META=R"pyds(metadata type of raw inference output attached by gst-nvinfer. Refer :class:`NvDsInferTensorMeta` for details.)pyds";
            constexpr const char* NVDSINFER_SEGMENTATION_META=R"pyds(metadata type of segmentation model output attached by gst-nvinfer. Refer :class:`NvDsInferSegmentationMeta` for details.)pyds";
            constexpr const char* NVDS_CROP_IMAGE_META=R"pyds(Specifies metadata type for JPEG-encoded object crops.See the deepstream-image-meta-test app for details.)pyds";
            constexpr const char* NVDS_TRACKER_PAST_FRAME_META=R"pyds(metadata type to be set for tracking previous frames)pyds";
            constexpr const char* NVDS_TRACKER_BATCH_REID_META=R"pyds(metadata type of ReID vectors for the whole batch generated by tracker)pyds";
            constexpr const char* NVDS_TRACKER_OBJ_REID_META=R"pyds(metadata type of ReID information for a single object generated by tracker)pyds";
            constexpr const char* NVDS_AUDIO_BATCH_META=R"pyds(Specifies metadata type for formed audio batch.)pyds";
            constexpr const char* NVDS_AUDIO_FRAME_META=R"pyds(Specifies metadata type for audio frame.)pyds";
            constexpr const char* NVDS_PREPROCESS_FRAME_META=R"pyds(Specifies metadata type for preprocess scale&converted ROIs attached by Gst-nvdspreprocess. Refer :class:`NvDsPreProcessFrameMeta` for details.)pyds";
            constexpr const char* NVDS_PREPROCESS_BATCH_META=R"pyds(Specifies metadata type for preprocess batch level attached by Gst-nvdspreprocess. Refer :class:`NvDsPreProcessBatchMeta` for details.)pyds";
            constexpr const char* NVDS_CUSTOM_MSG_BLOB=R"pyds(Specifies user defined custom message blob to be part of payload generated.)pyds";
            constexpr const char* NVDS_RESERVED_META=R"pyds(Reserved field)pyds";
            constexpr const char* NVDS_GST_CUSTOM_META=R"pyds(metadata type to be set for metadata attached by nvidia gstreamer plugins before nvstreammux gstreamer plugin. It is set as user metadata inside :class:`NvDsFrameMeta`. NVIDIA specific gst meta are in the range from NVDS_GST_CUSTOM_META to NVDS_GST_CUSTOM_META + 4096)pyds";
            constexpr const char* NVDS_START_USER_META=R"pyds(NVDS_START_USER_META)pyds";
            constexpr const char* NVDS_FORCE32_META=R"pyds(NVDS_FORCE32_META)pyds";
        }

        namespace NvDsComp_BboxInfoDoc
        {
            constexpr const char* descr = R"pyds(
                Holds unclipped positional bounding box coordinates of the object processed by the component.

                :ivar org_bbox_coords: :class:`NvBbox_Coords`, org_bbox_coords)pyds";

            constexpr const char* cast=R"pyds(cast given object/data to :class:`NvDsComp_BboxInfo`, call pyds.NvDsComp_BboxInfo.cast(data))pyds";
        }

        namespace MetaPoolDoc
        {
            constexpr const char* descr = R"pyds(
                Holds information about given metadata pool.

                :ivar meta_type: :class:`NvDsMetaType`, type of the pool. Used for internal purpose.
                :ivar max_elements_in_pool: *int*, max elements in the pool. Used for internal purpose.
                :ivar element_size: *int*, size of an element in the given pool. Used for internal purpose.
                :ivar num_empty_elements: *int*, number of empty elements. Used for internal purpose.
                :ivar num_full_elements: *int*, number of filled elements. These many elemnts are in use.
                :ivar empty_list: :class:`NvDsMetaList`, List containing empty elements.
                :ivar full_list: :class:`NvDsMetaList`, List containing full elements.)pyds";

            constexpr const char* cast=R"pyds(cast given object/data to :class:`NvDsMetaPool`, call pyds.NvDsMetaPool.cast(data))pyds";
        }

        namespace BaseMetaDoc
        {
            constexpr const char* descr = R"pyds(
                Holds information about base metadata of given metadata type.

                :ivar batch_meta: batch_meta
                :ivar meta_type: Metadata type of the given element.
                :ivar uContext: user context)pyds";

            constexpr const char* cast=R"pyds(cast given object/data to :class:`NvDsBaseMeta`, call pyds.NvDsBaseMeta.cast(data))pyds";
        }

        namespace BatchMetaDoc
        {
            constexpr const char* descr = R"pyds(
                Holds information a formed batched containing the frames from different sources.

                NOTE: Both Video and Audio metadata uses the same :class:`NvDsBatchMeta` type.

                NOTE: Audio batch metadata is formed within nvinferaudio plugin and will not be corresponding to any one buffer output from nvinferaudio.
                The :class:`NvDsBatchMeta` for audio is attached to the last input buffer when the audio batch buffering reach configurable threshold (audio frame length)
                and this is when inference output is available.

                :ivar base_meta: :class:`NvDsBaseMeta`, base_meta
                :ivar max_frames_in_batch: *int*, maximum number of frames those can be present the batch.
                :ivar num_frames_in_batch: *int*, Number of frames present in the current batch.
                :ivar frame_meta_pool: :class:`NvDsMetaPool`, pool of type :class:`NvDsFrameMeta`.
                :ivar obj_meta_pool: :class:`NvDsMetaPool`, pool of type :class:`NvDsObjMeta`.
                :ivar classifier_meta_pool: :class:`NvDsMetaPool`, pool of type :class:`NvDsClassifierMeta`.
                :ivar display_meta_pool: :class:`NvDsMetaPool`, A pool of type :class:`NvDsDisplayMeta`.
                :ivar user_meta_pool: :class:`NvDsMetaPool`, A pool of type :class:`NvDsUserMeta`.
                :ivar label_info_meta_pool: :class:`NvDsMetaPool`, A pool of type :class:`NvDsLabelInfo`.
                :ivar frame_meta_list: A list of items of type :class:`NvDsFrameMeta` in use in the current batch.
                :ivar batch_user_meta_list: A list of items of type :class:`NvDsUserMeta` in use in the current batch.
                :ivar meta_mutex: *GRecMutex*, lock to be taken before accessing metadata to avoid simultaneous update of same metadata by multiple components.
                :ivar misc_batch_info: *list of int*, For additional user specific batch info.
                :ivar reserved: *int*, Reserved for internal use.

                Example usage:
                ::

                    # Retrieve batch metadata from the gst_buffer
                    # Note that pyds.gst_buffer_get_nvds_batch_meta() expects the
                    # C address of gst_buffer as input, which is obtained with hash(gst_buffer)
                    batch_meta = pyds.gst_buffer_get_nvds_batch_meta(hash(gst_buffer))
                    l_frame = batch_meta.frame_meta_list #Get list containing NvDsFrameMeta objects from retrieved NvDsBatchMeta)pyds";

            constexpr const char* cast=R"pyds(cast given object/data to :class:`NvDsBatchMeta`, call pyds.NvDsBatchMeta.cast(data))pyds";
        }

        namespace FrameMetaDoc
        {
            constexpr const char* descr = R"pyds(
                Holds metadata for a frame in a batch.

                :ivar base_meta: :class:`NvDsBaseMeta`, Base metadata for frame.
                :ivar pad_index: *int*, Pad or port index of stream muxer component for the frame in the batch.
                :ivar batch_id: *int*, Location of the frame in the batch. :class:`NvBufSurfaceParams` for the frame will be at index batch_id in the surfaceList array of :class:`NvBufSurface`.
                :ivar frame_num: *int*, Current frame number of the source.
                :ivar buf_pts: *int*, Holds the presentation timestamp (PTS) of the frame.
                :ivar ntp_timestamp: *int*, Holds the ntp (network time protocol) timestamp.
                :ivar source_id: *int*, Source_id of the frame in the batch e.g. camera_id. It need not be in sequential order.
                :ivar num_surfaces_per_frame: *int*, Number of surfaces present in this frame. This is required in case multiple surfaces per frame.
                :ivar source_frame_width: *int*, Holds the width of the frame at input to Gst-streammux.
                :ivar source_frame_height: *int*, Holds the height of the frame at input to Gst-streammux.
                :ivar surface_type: *int*, Surface type of sub frame. This is required in case multiple surfaces per frame.
                :ivar surface_index: *int*, Surface index of sub frame. This is required in case multiple surfaces per frame.
                :ivar num_obj_meta: *int*, Number of object meta elements attached to the current frame.
                :ivar bInferDone: *int*, Boolean indicating whether inference is performed on given frame.
                :ivar obj_meta_list: List of objects of type :class:`NvDsObjectMeta` in use for the given frame.
                :ivar display_meta_list: List of objects of type :class:`NvDsDisplayMeta` in use for the given frame.
                :ivar frame_user_meta_list: List of objects of type :class:`NvDsUserMeta` in use for the given frame.
                :ivar misc_frame_info: *list of int*, For additional user specific batch info.
                :ivar reserved: *int*, Reserved for internal use.

                Example usage:
                ::

                    batch_meta = pyds.gst_buffer_get_nvds_batch_meta(hash(gst_buffer)) #Retrieve batch metadata from gst_buffer
                    l_frame = batch_meta.frame_meta_list
                    while l_frame is not None:
                        try:
                            frame_meta = pyds.NvDsFrameMeta.cast(l_frame.data) #Must cast data in frame_meta_list to NvDsFrameMeta object
                        except StopIteration:
                            break

                        frame_number=frame_meta.frame_num #Retrieve current frame number from NvDsFrameMeta object
                        num_rects = frame_meta.num_obj_meta #Retrieve number of objects in frame from NvDsFrameMeta object
                        l_obj=frame_meta.obj_meta_list #Retrieve list of NvDsObjectMeta objects in frame from NvDsFrameMeta object)pyds";

            constexpr const char* cast=R"pyds(cast given object/data to :class:`NvDsFrameMeta`, call pyds.NvDsFrameMeta.cast(data))pyds";
        }

        namespace ObjectMetaDoc
        {
            constexpr const char* descr = R"pyds(
                Holds information of object metadata in the frame.

                :ivar base_meta: :class:`NvDsBaseMeta`, base_meta
                :ivar parent: the parent :class:`NvDsObjectMeta` object. Set to None if parent is not present
                :ivar unique_component_id: *int*, unique component id that attaches NvDsObjectMeta metadata
                :ivar class_id: *int*, Index of the object class infered by the primary detector/classifier
                :ivar object_id: *int*, Unique ID for tracking the object. @ref UNTRACKED_OBJECT_ID indicates the object has not been tracked
                :ivar confidence: *float*, Holds a confidence value for the object, set by the inference component.
                    Confidence will be set to -0.1, if "Group Rectangles" mode of clustering is chosen since the algorithm does not preserve confidence values.
                    Also, for objects found by tracker and not inference component, confidence will be set to -0.1
                :ivar detector_bbox_info: :class:`NvDsComp_BboxInfo`, Holds a structure containing bounding box parameters of the object when detected by detector
                :ivar tracker_bbox_info: :class:`NvDsComp_BboxInfo`, Holds a structure containing bounding box coordinates of the object when processed by tracker
                :ivar tracker_confidence: *float*, Holds a confidence value for the object set by nvdcf_tracker. tracker_confidence will be set to -0.1 for KLT and IOU tracker
                :ivar rect_params: :class:`NvOSD_RectParams`, Structure containing the positional parameters of the object in the frame.
                    e.g. If the tracker component is after the detector component in the pipeline, then positional parameters are from tracker component.
                    Can also be used to overlay borders / semi-transparent boxes on top of objects. See :class:`NvOSD_RectParams`
                :ivar mask_params: :class:`NvOSD_MaskParams`, Holds mask parameters for the object. This mask is overlaid on object See :class:`NvOSD_MaskParams`
                :ivar text_params: :class:`NvOSD_TextParams`, Text describing the object can be overlayed using this structure. See :class:`NvOSD_TextParams`
                :ivar obj_label: An array to store the string describing the class of the detected object
                :ivar classifier_meta_list: list of objects of type :class:`NvDsClassifierMeta`
                :ivar obj_user_meta_list: list of objects of type :class:`NvDsUserMeta`
                :ivar misc_obj_info: *list of int*, For additional user specific batch info
                :ivar reserved: *int*, Reserved for internal use.

                Example usage:
                ::

                    #Initialize dict to keep count of objects of each type
                    obj_counter = {
                            PGIE_CLASS_ID_VEHICLE:0,
                            PGIE_CLASS_ID_PERSON:0,
                            PGIE_CLASS_ID_BICYCLE:0,
                            PGIE_CLASS_ID_ROADSIGN:0
                        }

                    l_obj=frame_meta.obj_meta_list #Retrieve list of NvDsObjectMeta objects in frame from an NvDsFrameMeta object. See NvDsFrameMeta documentation for more details.
                    while l_obj is not None:
                        try:
                            # Casting l_obj.data to pyds.NvDsObjectMeta
                            obj_meta=pyds.NvDsObjectMeta.cast(l_obj.data)
                            except StopIteration:
                                break
                            obj_counter[obj_meta.class_id] += 1 #Retrieve class_id from NvDsObjectMeta (i.e. PGIE_CLASS_ID_VEHICLE, PGIE_CLASS_ID_PERSON, etc.) to update count
                            obj_meta.rect_params.border_color.set(0.0, 0.0, 1.0, 0.0) #Set border color of NvDsObjectMeta object's rect_params
                            try:
                                l_obj=l_obj.next
                            except StopIteration:
                                break)pyds";

            constexpr const char* cast=R"pyds(cast given object/data to :class:`NvDsObjectMeta`, call pyds.NvDsObjectMeta.cast(data))pyds";
        }

        namespace ClassifierMetaDoc
        {
            constexpr const char* descr = R"pyds(
                Holds classifier metadata for an object.

                :ivar base_meta: :class:`NvDsBaseMeta`, base_meta
                :ivar num_labels: *int*, Number of outputs/labels of the classifier.
                :ivar unique_component_id: *int*, Unique component id that attaches NvDsClassifierMeta metadata.
                :ivar label_info_list: List of objects of type :class:`NvDsLabelInfo`.)pyds";

            constexpr const char* cast=R"pyds(cast given object/data to :class:`NvDsClassifierMeta`, call pyds.NvDsClassifierMeta.cast(data))pyds";
        }

        namespace LabelInfoDoc
        {
            constexpr const char* descr = R"pyds(
                Holds information of label metadata in the classifier.

                :ivar base_meta: :class:`NvDsBaseMeta`, base_meta
                :ivar num_classes: *int*, Number of classes of the given label.
                :ivar result_label: An array to store the string describing the label of the classified object.
                :ivar pResult_label: *str*, An object to store the result label if it exceeds MAX_LABEL_SIZE bytes.
                :ivar result_class_id: *int*, class_id of the best result.
                :ivar label_id: *int*, Holds the label ID in case there are multiple label classifiers.
                :ivar result_prob: *float*, Probability of best result.)pyds";

            constexpr const char* cast=R"pyds(cast given object/data to :class:`NvDsLabelInfo`, call pyds.NvDsLabelInfo.cast(data))pyds";
        }

        namespace DisplayMetaDoc
        {
            constexpr const char* descr = R"pyds(
                Holds information of display metadata that user can specify in the frame.

                :ivar base_meta: :class:`NvDsBaseMeta`, base_meta
                :ivar num_rects: *int*, Number of rectangles present in display meta.
                :ivar num_labels: *int*, Number of labels/strings present in display meta.
                :ivar num_lines: *int*, Number of lines present in display meta.
                :ivar rect_params: List of :class:`NvOSD_RectParams`, Holds a list of positional parameters for rectangles. Used to overlay borders or semi-transparent rectangles, as required by the application. See :class:`NvOSD_RectParams`.
                :ivar text_params: List of :class:`NvOSD_TextParams`, Holds a list of text parameters for user-defined strings that can be overlayed using this structure. See :class:`NvOSD_TextParams`.
                :ivar line_params: List of :class:`NvOSD_LineParams`, Holds a list of line parameters that the user can use to draw polygons in the frame, e.g. to show a RoI in the frame. See :class:`NvOSD_LineParams`.
                :ivar num_arrows: *int*, Holds the number of arrows described.
                :ivar num_circles: *int*, Holds the number of circles described.
                :ivar arrow_params: List of :class:`NvOSD_ArrowParams`, Holds a list of arrow parameters that the user can use to draw arrows in the frame. See :class:`NvOSD_ArrowParams`:
                :ivar circle_params: List of :class:`NvOSD_CircleParams`, Holds a list of circle parameters that the user can use to draw circle in the frame. See :class:`NvOSD_CircleParams`.
                :ivar misc_osd_data: *np.array of int*, Holds an np.array of user-defined OSD metadata.
                :ivar reserved: *list of int*, Reserved for internal use.

                Example usage:
                ::

                    display_meta=pyds.nvds_acquire_display_meta_from_pool(batch_meta) #Retrieve NvDsDisplayMeta object from pool in given NvDsBatchMeta object
                    display_meta.num_labels = 1
                    py_nvosd_text_params = display_meta.text_params[0] #Retrieve NvOSD_TextParams object from list in display meta. See NvOSD docs for more details.
                    # Setting display text to be shown on screen
                    # Note that the pyds module allocates a buffer for the string, and the
                    # memory will not be claimed by the garbage collector.
                    # Reading the display_text field here will return the C address of the
                    # allocated string. Use pyds.get_string() to get the string content.
                    py_nvosd_text_params.display_text = "Frame Number={} Number of Objects={} Vehicle_count={} Person_count={}".format(frame_number, num_rects, obj_counter[PGIE_CLASS_ID_VEHICLE], obj_counter[PGIE_CLASS_ID_PERSON])

                    print(pyds.get_string(py_nvosd_text_params.display_text))
                    pyds.nvds_add_display_meta_to_frame(frame_meta, display_meta) #Use method to add display_meta to frame_meta.)pyds";

            constexpr const char* cast=R"pyds(cast given object/data to :class:`NvDsDisplayMeta`, call pyds.NvDsDisplayMeta.cast(data))pyds";
        }

        namespace UserMetaDoc
        {
            constexpr const char* descr = R"pyds(
                Holds information of user metadata that user can specify.

                :ivar base_meta: :class:`NvDsBaseMeta`, base_meta
                :ivar user_meta_data: User data object to be attached. Refer to deepstream-user-metadata-test example for usage.

                Example usage, where user metadata is of type NVDS_TRACKER_PAST_FRAME_META:
                ::

                    l_user=batch_meta.batch_user_meta_list #Retrieve glist containing NvDsUserMeta objects from given NvDsBatchMeta object
                    while l_user is not None:
                        try:
                            # Note that l_user.data needs a cast to pyds.NvDsUserMeta
                            # The casting is done by pyds.NvDsUserMeta.cast()
                            # The casting also keeps ownership of the underlying memory
                            # in the C code, so the Python garbage collector will leave
                            # it alone
                            user_meta=pyds.NvDsUserMeta.cast(l_user.data)
                        except StopIteration:
                            break
                        if(user_meta and user_meta.base_meta.meta_type==pyds.NvDsMetaType.NVDS_TRACKER_PAST_FRAME_META): #Check data type of user_meta
                            try:
                                # Note that user_meta.user_meta_data needs a cast to pyds.NvDsPastFrameObjBatch
                                # The casting is done by pyds.NvDsPastFrameObjBatch.cast()
                                # The casting also keeps ownership of the underlying memory
                                # in the C code, so the Python garbage collector will leave
                                # it alone
                                pPastFrameObjBatch = pyds.NvDsPastFrameObjBatch.cast(user_meta.user_meta_data)
                            except StopIteration:
                                break
                            for trackobj in pyds.NvDsPastFrameObjBatch.list(pPastFrameObjBatch):
                                ... #Examine past frame information, see NvDsTrackerMeta docs for details.
                            try:
                                l_user=l_user.next
                            except StopIteration:
                                break)pyds";

            constexpr const char* cast=R"pyds(cast given object/data to :class:`NvDsUserMeta`, call pyds.NvDsUserMeta.cast(data))pyds";
        }

    }
}